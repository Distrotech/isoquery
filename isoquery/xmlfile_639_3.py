# - encoding: UTF-8 -
#
# Copyright © 2007-2011 Tobias Quathamer
#
# This file is part of isoquery.
#
# isoquery is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.
#
# isoquery is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

import sys
import gettext
translation = gettext.translation('isoquery', fallback=True)
_ = translation.ugettext
from lxml import etree
import xmlfile
from code_not_defined_error import CodeNotDefinedError

class XMLFile_639_3(xmlfile.XMLFile):
    """Handle ISO 639-3"""
    def get_display_codes(self):
        """Return a list of code attributes"""
        return ["id", "scope", "type", "part1_code", "part2_code"]

    def get_display_names(self, display_name):
        """Return a list of possible name attributes.
        
        If the first attribute is not found, the next one in the list
        will be tried. This is to enable official_name and
        common_name in ISO 3166, other standards don't need this."""
        return ["name"]

    def get_xpaths(self, code):
        """Return a list of all xpaths needed to show the requested codes"""
        xpaths = []
        if (len(code) == 1):
            xpath = "//iso_639_3_entry[@scope='" + code.upper() + "']"
            xpaths.append(xpath)
            xpath = "//iso_639_3_entry[@type='" + code.upper() + "']"
        elif (len(code) == 2):
            xpath = "//iso_639_3_entry[@part1_code='" + code.lower() + "']"
        else:
            xpath = "//iso_639_3_entry[@id='" + code.lower() + "']"
            xpaths.append(xpath)
            xpath = "//iso_639_3_entry[@part2_code='" + code.lower() + "']"
        xpaths.append(xpath)
        return xpaths
