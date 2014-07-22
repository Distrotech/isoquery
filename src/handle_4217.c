/* handle_4217.c generated by valac 0.22.1, the Vala compiler
 * generated from handle_4217.vala, do not modify */

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


#define TYPE_HANDLE_4217 (handle_4217_get_type ())
#define HANDLE_4217(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_HANDLE_4217, Handle_4217))
#define HANDLE_4217_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_HANDLE_4217, Handle_4217Class))
#define IS_HANDLE_4217(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_HANDLE_4217))
#define IS_HANDLE_4217_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_HANDLE_4217))
#define HANDLE_4217_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_HANDLE_4217, Handle_4217Class))

typedef struct _Handle_4217 Handle_4217;
typedef struct _Handle_4217Class Handle_4217Class;
typedef struct _Handle_4217Private Handle_4217Private;

#define TYPE_PROGRAM_OPTIONS (program_options_get_type ())
typedef struct _ProgramOptions ProgramOptions;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_regex_unref0(var) ((var == NULL) ? NULL : (var = (g_regex_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

struct _Handle_4217 {
	GObject parent_instance;
	Handle_4217Private * priv;
};

struct _Handle_4217Class {
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


static gpointer handle_4217_parent_class = NULL;
static ProgramOptions handle_4217_options;
static ProgramOptions handle_4217_options = {0};
static libisocodesISO_4217* handle_4217_iso;
static libisocodesISO_4217* handle_4217_iso = NULL;
static gchar* handle_4217_standard;
static gchar* handle_4217_standard = NULL;

GType handle_4217_get_type (void) G_GNUC_CONST;
enum  {
	HANDLE_4217_DUMMY_PROPERTY
};
GType program_options_get_type (void) G_GNUC_CONST;
ProgramOptions* program_options_dup (const ProgramOptions* self);
void program_options_free (ProgramOptions* self);
void program_options_copy (const ProgramOptions* self, ProgramOptions* dest);
void program_options_destroy (ProgramOptions* self);
void handle_4217_show (ProgramOptions* opts, gchar** codes, int codes_length1);
static void _handle_4217_show_codes (gchar** codes, int codes_length1);
static void _handle_4217_show_item (libisocodesISO_4217_Item* item);
Handle_4217* handle_4217_new (void);
Handle_4217* handle_4217_construct (GType object_type);
static void handle_4217_finalize (GObject* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


void handle_4217_show (ProgramOptions* opts, gchar** codes, int codes_length1) {
	ProgramOptions _tmp0_ = {0};
	ProgramOptions _tmp1_ = {0};
	libisocodesISO_4217* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	libisocodesISO_4217* _tmp4_ = NULL;
	ProgramOptions _tmp5_ = {0};
	const gchar* _tmp6_ = NULL;
	libisocodesISO_4217* _tmp7_ = NULL;
	ProgramOptions _tmp8_ = {0};
	const gchar* _tmp9_ = NULL;
	gchar** _tmp10_ = NULL;
	gint _tmp10__length1 = 0;
	g_return_if_fail (opts != NULL);
	_tmp0_ = *opts;
	program_options_copy (&_tmp0_, &_tmp1_);
	program_options_destroy (&handle_4217_options);
	handle_4217_options = _tmp1_;
	_tmp2_ = libisocodes_iso_4217_new ();
	_g_object_unref0 (handle_4217_iso);
	handle_4217_iso = _tmp2_;
	_tmp3_ = g_strdup ("4217");
	_g_free0 (handle_4217_standard);
	handle_4217_standard = _tmp3_;
	_tmp4_ = handle_4217_iso;
	_tmp5_ = handle_4217_options;
	_tmp6_ = _tmp5_.filepath;
	libisocodes_iso_codes_set_filepath ((libisocodesISO_Codes*) _tmp4_, _tmp6_);
	_tmp7_ = handle_4217_iso;
	_tmp8_ = handle_4217_options;
	_tmp9_ = _tmp8_.locale;
	libisocodes_iso_codes_set_locale ((libisocodesISO_Codes*) _tmp7_, _tmp9_);
	_tmp10_ = codes;
	_tmp10__length1 = codes_length1;
	_handle_4217_show_codes (_tmp10_, _tmp10__length1);
}


static void _handle_4217_show_item (libisocodesISO_4217_Item* item) {
	FILE* _tmp0_ = NULL;
	libisocodesISO_4217_Item* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	FILE* _tmp3_ = NULL;
	libisocodesISO_4217_Item* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	FILE* _tmp6_ = NULL;
	libisocodesISO_4217_Item* _tmp7_ = NULL;
	const gchar* _tmp8_ = NULL;
	ProgramOptions _tmp9_ = {0};
	gboolean _tmp10_ = FALSE;
	g_return_if_fail (item != NULL);
	_tmp0_ = stdout;
	_tmp1_ = item;
	_tmp2_ = _tmp1_->letter_code;
	fprintf (_tmp0_, "%s\t", _tmp2_);
	_tmp3_ = stdout;
	_tmp4_ = item;
	_tmp5_ = _tmp4_->numeric_code;
	fprintf (_tmp3_, "%s\t", _tmp5_);
	_tmp6_ = stdout;
	_tmp7_ = item;
	_tmp8_ = _tmp7_->name;
	fprintf (_tmp6_, "%s", _tmp8_);
	_tmp9_ = handle_4217_options;
	_tmp10_ = _tmp9_.use_null_separator;
	if (_tmp10_) {
		FILE* _tmp11_ = NULL;
		_tmp11_ = stdout;
		fprintf (_tmp11_, "%c", 0);
	} else {
		FILE* _tmp12_ = NULL;
		_tmp12_ = stdout;
		fprintf (_tmp12_, "\n");
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
				goto __catch18_g_regex_error;
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
				goto __catch18_g_regex_error;
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
	goto __finally18;
	__catch18_g_regex_error:
	{
		GError* e = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		g_assert_not_reached ();
		_g_error_free0 (e);
	}
	__finally18:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
}


static void _handle_4217_show_codes (gchar** codes, int codes_length1) {
	gchar** _tmp0_ = NULL;
	gint _tmp0__length1 = 0;
	GError * _inner_error_ = NULL;
	_tmp0_ = codes;
	_tmp0__length1 = codes_length1;
	if (_tmp0__length1 == 0) {
		{
			libisocodesISO_4217_Item** items = NULL;
			libisocodesISO_4217* _tmp1_ = NULL;
			gint _tmp2_ = 0;
			libisocodesISO_4217_Item** _tmp3_ = NULL;
			gint items_length1 = 0;
			gint _items_size_ = 0;
			libisocodesISO_4217_Item** _tmp4_ = NULL;
			gint _tmp4__length1 = 0;
			_tmp1_ = handle_4217_iso;
			_tmp3_ = libisocodes_iso_4217_find_all (_tmp1_, &_tmp2_, &_inner_error_);
			items = _tmp3_;
			items_length1 = _tmp2_;
			_items_size_ = items_length1;
			if (_inner_error_ != NULL) {
				if (_inner_error_->domain == LIBISOCODES_ISO_CODES_ERROR) {
					goto __catch17_libisocodes_iso_codes_error;
				}
				g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
				g_clear_error (&_inner_error_);
				return;
			}
			_tmp4_ = items;
			_tmp4__length1 = items_length1;
			{
				libisocodesISO_4217_Item** item_collection = NULL;
				gint item_collection_length1 = 0;
				gint _item_collection_size_ = 0;
				gint item_it = 0;
				item_collection = _tmp4_;
				item_collection_length1 = _tmp4__length1;
				for (item_it = 0; item_it < _tmp4__length1; item_it = item_it + 1) {
					libisocodesISO_4217_Item* _tmp5_ = NULL;
					libisocodesISO_4217_Item* item = NULL;
					_tmp5_ = _g_object_ref0 (item_collection[item_it]);
					item = _tmp5_;
					{
						libisocodesISO_4217_Item* _tmp6_ = NULL;
						_tmp6_ = item;
						_handle_4217_show_item (_tmp6_);
						_g_object_unref0 (item);
					}
				}
			}
			items = (_vala_array_free (items, items_length1, (GDestroyNotify) g_object_unref), NULL);
		}
		goto __finally17;
		__catch17_libisocodes_iso_codes_error:
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
		__finally17:
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
						libisocodesISO_4217_Item* item = NULL;
						libisocodesISO_4217* _tmp15_ = NULL;
						const gchar* _tmp16_ = NULL;
						libisocodesISO_4217_Item* _tmp17_ = NULL;
						libisocodesISO_4217_Item* _tmp18_ = NULL;
						_tmp15_ = handle_4217_iso;
						_tmp16_ = code;
						_tmp17_ = libisocodes_iso_4217_find_code (_tmp15_, _tmp16_, &_inner_error_);
						item = _tmp17_;
						if (_inner_error_ != NULL) {
							if (_inner_error_->domain == LIBISOCODES_ISO_CODES_ERROR) {
								goto __catch19_libisocodes_iso_codes_error;
							}
							_g_free0 (code);
							g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
							g_clear_error (&_inner_error_);
							return;
						}
						_tmp18_ = item;
						_handle_4217_show_item (_tmp18_);
						_g_object_unref0 (item);
					}
					goto __finally19;
					__catch19_libisocodes_iso_codes_error:
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
					__finally19:
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


Handle_4217* handle_4217_construct (GType object_type) {
	Handle_4217 * self = NULL;
	self = (Handle_4217*) g_object_new (object_type, NULL);
	return self;
}


Handle_4217* handle_4217_new (void) {
	return handle_4217_construct (TYPE_HANDLE_4217);
}


static void handle_4217_class_init (Handle_4217Class * klass) {
	handle_4217_parent_class = g_type_class_peek_parent (klass);
	G_OBJECT_CLASS (klass)->finalize = handle_4217_finalize;
}


static void handle_4217_instance_init (Handle_4217 * self) {
}


static void handle_4217_finalize (GObject* obj) {
	Handle_4217 * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_HANDLE_4217, Handle_4217);
	G_OBJECT_CLASS (handle_4217_parent_class)->finalize (obj);
}


GType handle_4217_get_type (void) {
	static volatile gsize handle_4217_type_id__volatile = 0;
	if (g_once_init_enter (&handle_4217_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (Handle_4217Class), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) handle_4217_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (Handle_4217), 0, (GInstanceInitFunc) handle_4217_instance_init, NULL };
		GType handle_4217_type_id;
		handle_4217_type_id = g_type_register_static (G_TYPE_OBJECT, "Handle_4217", &g_define_type_info, 0);
		g_once_init_leave (&handle_4217_type_id__volatile, handle_4217_type_id);
	}
	return handle_4217_type_id__volatile;
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


