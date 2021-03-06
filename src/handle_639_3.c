/* handle_639_3.c generated by valac 0.22.1, the Vala compiler
 * generated from handle_639_3.vala, do not modify */

/* Copyright © 2013-2014 Tobias Quathamer
 *
 * This file is part of isoquery.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <libisocodes.h>
#include <stdio.h>
#include <glib/gi18n-lib.h>


#define TYPE_HANDLE_639_3 (handle_639_3_get_type ())
#define HANDLE_639_3(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_HANDLE_639_3, Handle_639_3))
#define HANDLE_639_3_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_HANDLE_639_3, Handle_639_3Class))
#define IS_HANDLE_639_3(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_HANDLE_639_3))
#define IS_HANDLE_639_3_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_HANDLE_639_3))
#define HANDLE_639_3_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_HANDLE_639_3, Handle_639_3Class))

typedef struct _Handle_639_3 Handle_639_3;
typedef struct _Handle_639_3Class Handle_639_3Class;
typedef struct _Handle_639_3Private Handle_639_3Private;

#define TYPE_PROGRAM_OPTIONS (program_options_get_type ())
typedef struct _ProgramOptions ProgramOptions;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_regex_unref0(var) ((var == NULL) ? NULL : (var = (g_regex_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

struct _Handle_639_3 {
	GObject parent_instance;
	Handle_639_3Private * priv;
};

struct _Handle_639_3Class {
	GObjectClass parent_class;
};

struct _ProgramOptions {
	gchar* iso;
	gchar* filepath;
	gchar* locale;
	gboolean name;
	gboolean official_name;
	gboolean common_name;
	gboolean use_null_separator;
	gboolean version;
};


static gpointer handle_639_3_parent_class = NULL;
static ProgramOptions handle_639_3_options;
static ProgramOptions handle_639_3_options = {0};
static libisocodesISO_639_3* handle_639_3_iso;
static libisocodesISO_639_3* handle_639_3_iso = NULL;
static gchar* handle_639_3_standard;
static gchar* handle_639_3_standard = NULL;

GType handle_639_3_get_type (void) G_GNUC_CONST;
enum  {
	HANDLE_639_3_DUMMY_PROPERTY
};
GType program_options_get_type (void) G_GNUC_CONST;
ProgramOptions* program_options_dup (const ProgramOptions* self);
void program_options_free (ProgramOptions* self);
void program_options_copy (const ProgramOptions* self, ProgramOptions* dest);
void program_options_destroy (ProgramOptions* self);
void handle_639_3_show (ProgramOptions* opts, gchar** codes, int codes_length1);
static void _handle_639_3_show_codes (gchar** codes, int codes_length1);
static void _handle_639_3_show_item (libisocodesISO_639_3_Item* item);
Handle_639_3* handle_639_3_new (void);
Handle_639_3* handle_639_3_construct (GType object_type);
static void handle_639_3_finalize (GObject* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


void handle_639_3_show (ProgramOptions* opts, gchar** codes, int codes_length1) {
	ProgramOptions _tmp0_ = {0};
	ProgramOptions _tmp1_ = {0};
	libisocodesISO_639_3* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	libisocodesISO_639_3* _tmp4_ = NULL;
	ProgramOptions _tmp5_ = {0};
	const gchar* _tmp6_ = NULL;
	libisocodesISO_639_3* _tmp7_ = NULL;
	ProgramOptions _tmp8_ = {0};
	const gchar* _tmp9_ = NULL;
	gchar** _tmp10_ = NULL;
	gint _tmp10__length1 = 0;
	g_return_if_fail (opts != NULL);
	_tmp0_ = *opts;
	program_options_copy (&_tmp0_, &_tmp1_);
	program_options_destroy (&handle_639_3_options);
	handle_639_3_options = _tmp1_;
	_tmp2_ = libisocodes_iso_639_3_new ();
	_g_object_unref0 (handle_639_3_iso);
	handle_639_3_iso = _tmp2_;
	_tmp3_ = g_strdup ("639-3");
	_g_free0 (handle_639_3_standard);
	handle_639_3_standard = _tmp3_;
	_tmp4_ = handle_639_3_iso;
	_tmp5_ = handle_639_3_options;
	_tmp6_ = _tmp5_.filepath;
	libisocodes_iso_codes_set_filepath ((libisocodesISO_Codes*) _tmp4_, _tmp6_);
	_tmp7_ = handle_639_3_iso;
	_tmp8_ = handle_639_3_options;
	_tmp9_ = _tmp8_.locale;
	libisocodes_iso_codes_set_locale ((libisocodesISO_Codes*) _tmp7_, _tmp9_);
	_tmp10_ = codes;
	_tmp10__length1 = codes_length1;
	_handle_639_3_show_codes (_tmp10_, _tmp10__length1);
}


static void _handle_639_3_show_item (libisocodesISO_639_3_Item* item) {
	FILE* _tmp0_ = NULL;
	libisocodesISO_639_3_Item* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	FILE* _tmp3_ = NULL;
	libisocodesISO_639_3_Item* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	FILE* _tmp6_ = NULL;
	libisocodesISO_639_3_Item* _tmp7_ = NULL;
	const gchar* _tmp8_ = NULL;
	FILE* _tmp9_ = NULL;
	libisocodesISO_639_3_Item* _tmp10_ = NULL;
	const gchar* _tmp11_ = NULL;
	FILE* _tmp12_ = NULL;
	libisocodesISO_639_3_Item* _tmp13_ = NULL;
	const gchar* _tmp14_ = NULL;
	gboolean _tmp15_ = FALSE;
	ProgramOptions _tmp16_ = {0};
	gboolean _tmp17_ = FALSE;
	gboolean _tmp20_ = FALSE;
	ProgramOptions _tmp27_ = {0};
	gboolean _tmp28_ = FALSE;
	g_return_if_fail (item != NULL);
	_tmp0_ = stdout;
	_tmp1_ = item;
	_tmp2_ = _tmp1_->id;
	fprintf (_tmp0_, "%s\t", _tmp2_);
	_tmp3_ = stdout;
	_tmp4_ = item;
	_tmp5_ = _tmp4_->scope;
	fprintf (_tmp3_, "%s\t", _tmp5_);
	_tmp6_ = stdout;
	_tmp7_ = item;
	_tmp8_ = _tmp7_->type;
	fprintf (_tmp6_, "%s\t", _tmp8_);
	_tmp9_ = stdout;
	_tmp10_ = item;
	_tmp11_ = _tmp10_->part1_code;
	fprintf (_tmp9_, "%s\t", _tmp11_);
	_tmp12_ = stdout;
	_tmp13_ = item;
	_tmp14_ = _tmp13_->part2_code;
	fprintf (_tmp12_, "%s\t", _tmp14_);
	_tmp16_ = handle_639_3_options;
	_tmp17_ = _tmp16_.common_name;
	if (_tmp17_) {
		libisocodesISO_639_3_Item* _tmp18_ = NULL;
		const gchar* _tmp19_ = NULL;
		_tmp18_ = item;
		_tmp19_ = _tmp18_->common_name;
		_tmp15_ = g_strcmp0 (_tmp19_, "") != 0;
	} else {
		_tmp15_ = FALSE;
	}
	_tmp20_ = _tmp15_;
	if (_tmp20_) {
		FILE* _tmp21_ = NULL;
		libisocodesISO_639_3_Item* _tmp22_ = NULL;
		const gchar* _tmp23_ = NULL;
		_tmp21_ = stdout;
		_tmp22_ = item;
		_tmp23_ = _tmp22_->common_name;
		fprintf (_tmp21_, "%s", _tmp23_);
	} else {
		FILE* _tmp24_ = NULL;
		libisocodesISO_639_3_Item* _tmp25_ = NULL;
		const gchar* _tmp26_ = NULL;
		_tmp24_ = stdout;
		_tmp25_ = item;
		_tmp26_ = _tmp25_->name;
		fprintf (_tmp24_, "%s", _tmp26_);
	}
	_tmp27_ = handle_639_3_options;
	_tmp28_ = _tmp27_.use_null_separator;
	if (_tmp28_) {
		FILE* _tmp29_ = NULL;
		_tmp29_ = stdout;
		fprintf (_tmp29_, "%c", 0);
	} else {
		FILE* _tmp30_ = NULL;
		_tmp30_ = stdout;
		fprintf (_tmp30_, "\n");
	}
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static gchar* string_replace (const gchar* self, const gchar* old, const gchar* replacement) {
	gchar* result = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (old != NULL, NULL);
	g_return_val_if_fail (replacement != NULL, NULL);
	{
		GRegex* regex = NULL;
		const gchar* _tmp0_ = NULL;
		gchar* _tmp1_ = NULL;
		gchar* _tmp2_ = NULL;
		GRegex* _tmp3_ = NULL;
		GRegex* _tmp4_ = NULL;
		gchar* _tmp5_ = NULL;
		GRegex* _tmp6_ = NULL;
		const gchar* _tmp7_ = NULL;
		gchar* _tmp8_ = NULL;
		_tmp0_ = old;
		_tmp1_ = g_regex_escape_string (_tmp0_, -1);
		_tmp2_ = _tmp1_;
		_tmp3_ = g_regex_new (_tmp2_, 0, 0, &_inner_error_);
		_tmp4_ = _tmp3_;
		_g_free0 (_tmp2_);
		regex = _tmp4_;
		if (_inner_error_ != NULL) {
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch6_g_regex_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		_tmp6_ = regex;
		_tmp7_ = replacement;
		_tmp8_ = g_regex_replace_literal (_tmp6_, self, (gssize) (-1), 0, _tmp7_, 0, &_inner_error_);
		_tmp5_ = _tmp8_;
		if (_inner_error_ != NULL) {
			_g_regex_unref0 (regex);
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch6_g_regex_error;
			}
			_g_regex_unref0 (regex);
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		result = _tmp5_;
		_g_regex_unref0 (regex);
		return result;
	}
	goto __finally6;
	__catch6_g_regex_error:
	{
		GError* e = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		g_assert_not_reached ();
		_g_error_free0 (e);
	}
	__finally6:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
}


static void _handle_639_3_show_codes (gchar** codes, int codes_length1) {
	gchar** _tmp0_ = NULL;
	gint _tmp0__length1 = 0;
	GError * _inner_error_ = NULL;
	_tmp0_ = codes;
	_tmp0__length1 = codes_length1;
	if (_tmp0__length1 == 0) {
		{
			libisocodesISO_639_3_Item** items = NULL;
			libisocodesISO_639_3* _tmp1_ = NULL;
			gint _tmp2_ = 0;
			libisocodesISO_639_3_Item** _tmp3_ = NULL;
			gint items_length1 = 0;
			gint _items_size_ = 0;
			libisocodesISO_639_3_Item** _tmp4_ = NULL;
			gint _tmp4__length1 = 0;
			_tmp1_ = handle_639_3_iso;
			_tmp3_ = libisocodes_iso_639_3_find_all (_tmp1_, &_tmp2_, &_inner_error_);
			items = _tmp3_;
			items_length1 = _tmp2_;
			_items_size_ = items_length1;
			if (_inner_error_ != NULL) {
				if (_inner_error_->domain == LIBISOCODES_ISO_CODES_ERROR) {
					goto __catch5_libisocodes_iso_codes_error;
				}
				g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
				g_clear_error (&_inner_error_);
				return;
			}
			_tmp4_ = items;
			_tmp4__length1 = items_length1;
			{
				libisocodesISO_639_3_Item** item_collection = NULL;
				gint item_collection_length1 = 0;
				gint _item_collection_size_ = 0;
				gint item_it = 0;
				item_collection = _tmp4_;
				item_collection_length1 = _tmp4__length1;
				for (item_it = 0; item_it < _tmp4__length1; item_it = item_it + 1) {
					libisocodesISO_639_3_Item* _tmp5_ = NULL;
					libisocodesISO_639_3_Item* item = NULL;
					_tmp5_ = _g_object_ref0 (item_collection[item_it]);
					item = _tmp5_;
					{
						libisocodesISO_639_3_Item* _tmp6_ = NULL;
						_tmp6_ = item;
						_handle_639_3_show_item (_tmp6_);
						_g_object_unref0 (item);
					}
				}
			}
			items = (_vala_array_free (items, items_length1, (GDestroyNotify) g_object_unref), NULL);
		}
		goto __finally5;
		__catch5_libisocodes_iso_codes_error:
		{
			GError* err = NULL;
			FILE* _tmp7_ = NULL;
			const gchar* _tmp8_ = NULL;
			GError* _tmp9_ = NULL;
			const gchar* _tmp10_ = NULL;
			gchar* _tmp11_ = NULL;
			gchar* _tmp12_ = NULL;
			err = _inner_error_;
			_inner_error_ = NULL;
			_tmp7_ = stderr;
			_tmp8_ = _ ("isoquery: %(error_message)s\n");
			_tmp9_ = err;
			_tmp10_ = _tmp9_->message;
			_tmp11_ = string_replace (_tmp8_, "%(error_message)s", _tmp10_);
			_tmp12_ = _tmp11_;
			fprintf (_tmp7_, "%s", _tmp12_);
			_g_free0 (_tmp12_);
			exit (EXIT_FAILURE);
			_g_error_free0 (err);
		}
		__finally5:
		if (_inner_error_ != NULL) {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
	} else {
		gchar** _tmp13_ = NULL;
		gint _tmp13__length1 = 0;
		_tmp13_ = codes;
		_tmp13__length1 = codes_length1;
		{
			gchar** code_collection = NULL;
			gint code_collection_length1 = 0;
			gint _code_collection_size_ = 0;
			gint code_it = 0;
			code_collection = _tmp13_;
			code_collection_length1 = _tmp13__length1;
			for (code_it = 0; code_it < _tmp13__length1; code_it = code_it + 1) {
				gchar* _tmp14_ = NULL;
				gchar* code = NULL;
				_tmp14_ = g_strdup (code_collection[code_it]);
				code = _tmp14_;
				{
					{
						libisocodesISO_639_3_Item* item = NULL;
						libisocodesISO_639_3* _tmp15_ = NULL;
						const gchar* _tmp16_ = NULL;
						libisocodesISO_639_3_Item* _tmp17_ = NULL;
						libisocodesISO_639_3_Item* _tmp18_ = NULL;
						_tmp15_ = handle_639_3_iso;
						_tmp16_ = code;
						_tmp17_ = libisocodes_iso_639_3_find_code (_tmp15_, _tmp16_, &_inner_error_);
						item = _tmp17_;
						if (_inner_error_ != NULL) {
							if (_inner_error_->domain == LIBISOCODES_ISO_CODES_ERROR) {
								goto __catch7_libisocodes_iso_codes_error;
							}
							_g_free0 (code);
							g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
							g_clear_error (&_inner_error_);
							return;
						}
						_tmp18_ = item;
						_handle_639_3_show_item (_tmp18_);
						_g_object_unref0 (item);
					}
					goto __finally7;
					__catch7_libisocodes_iso_codes_error:
					{
						GError* err = NULL;
						FILE* _tmp19_ = NULL;
						const gchar* _tmp20_ = NULL;
						GError* _tmp21_ = NULL;
						const gchar* _tmp22_ = NULL;
						gchar* _tmp23_ = NULL;
						gchar* _tmp24_ = NULL;
						GError* _tmp25_ = NULL;
						err = _inner_error_;
						_inner_error_ = NULL;
						_tmp19_ = stderr;
						_tmp20_ = _ ("isoquery: %(error_message)s\n");
						_tmp21_ = err;
						_tmp22_ = _tmp21_->message;
						_tmp23_ = string_replace (_tmp20_, "%(error_message)s", _tmp22_);
						_tmp24_ = _tmp23_;
						fprintf (_tmp19_, "%s", _tmp24_);
						_g_free0 (_tmp24_);
						_tmp25_ = err;
						if (!g_error_matches (_tmp25_, LIBISOCODES_ISO_CODES_ERROR, LIBISOCODES_ISO_CODES_ERROR_CODE_NOT_DEFINED)) {
							exit (EXIT_FAILURE);
						}
						_g_error_free0 (err);
					}
					__finally7:
					if (_inner_error_ != NULL) {
						_g_free0 (code);
						g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
						g_clear_error (&_inner_error_);
						return;
					}
					_g_free0 (code);
				}
			}
		}
	}
}


Handle_639_3* handle_639_3_construct (GType object_type) {
	Handle_639_3 * self = NULL;
	self = (Handle_639_3*) g_object_new (object_type, NULL);
	return self;
}


Handle_639_3* handle_639_3_new (void) {
	return handle_639_3_construct (TYPE_HANDLE_639_3);
}


static void handle_639_3_class_init (Handle_639_3Class * klass) {
	handle_639_3_parent_class = g_type_class_peek_parent (klass);
	G_OBJECT_CLASS (klass)->finalize = handle_639_3_finalize;
}


static void handle_639_3_instance_init (Handle_639_3 * self) {
}


static void handle_639_3_finalize (GObject* obj) {
	Handle_639_3 * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_HANDLE_639_3, Handle_639_3);
	G_OBJECT_CLASS (handle_639_3_parent_class)->finalize (obj);
}


GType handle_639_3_get_type (void) {
	static volatile gsize handle_639_3_type_id__volatile = 0;
	if (g_once_init_enter (&handle_639_3_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (Handle_639_3Class), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) handle_639_3_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (Handle_639_3), 0, (GInstanceInitFunc) handle_639_3_instance_init, NULL };
		GType handle_639_3_type_id;
		handle_639_3_type_id = g_type_register_static (G_TYPE_OBJECT, "Handle_639_3", &g_define_type_info, 0);
		g_once_init_leave (&handle_639_3_type_id__volatile, handle_639_3_type_id);
	}
	return handle_639_3_type_id__volatile;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



