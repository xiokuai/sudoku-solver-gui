/* Generated code for Python module 'dlx_solver'
 * created by Nuitka version 2.7.11
 *
 * This code is in part copyright 2025 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_dlx_solver" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dlx_solver;
PyDictObject *moduledict_dlx_solver;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[90];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[90];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("dlx_solver"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 90; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_dlx_solver(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 90; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 5
#if PYTHON_VERSION >= 0x3c0
NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyInterpreterState *interp, PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = interp->dict_state.next_keys_version++;
    dk->dk_version = result;
    return result;
}
#elif PYTHON_VERSION >= 0x3b0
static uint32_t _Nuitka_next_dict_keys_version = 2;

NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = _Nuitka_next_dict_keys_version++;
    dk->dk_version = result;
    return result;
}
#endif
#endif

// Accessors to module variables.
static PyObject *module_var_accessor_dlx_solver$ColumnNode(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_dlx_solver->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_dlx_solver->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[13]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_dlx_solver->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[13]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[13], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[13]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[13], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[13]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[13]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[13]);
    }

    return result;
}

static PyObject *module_var_accessor_dlx_solver$DLXSolver(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_dlx_solver->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_dlx_solver->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[49]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_dlx_solver->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[49]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[49], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[49]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[49], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[49]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[49]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[49]);
    }

    return result;
}

static PyObject *module_var_accessor_dlx_solver$Node(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_dlx_solver->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_dlx_solver->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[17]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_dlx_solver->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[17]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[17], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[17]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[17], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[17]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[17]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[17]);
    }

    return result;
}

static PyObject *module_var_accessor_dlx_solver$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_dlx_solver->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_dlx_solver->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[89]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_dlx_solver->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[89]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[89], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[89]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[89], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[89]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[89]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[89]);
    }

    return result;
}

static PyObject *module_var_accessor_dlx_solver$sudoku_to_exact_cover(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_dlx_solver->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_dlx_solver->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[48]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_dlx_solver->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[48]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[48], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[48]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[48], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[48]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[48]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[48]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_5846d89cac8cb6a12d9abc6691f40aa0;
static PyCodeObject *code_objects_b8c0d8ef21243b9442223c3d582419bb;
static PyCodeObject *code_objects_ee51064bb7896fe14eb189ce958d2fc7;
static PyCodeObject *code_objects_16b9f90f650e2563f8e4d2430eb79ab2;
static PyCodeObject *code_objects_a1f7e452bf478d0305f45a9fe59bcbd9;
static PyCodeObject *code_objects_24c71192453f9b1f4d14d28ed49fd6a7;
static PyCodeObject *code_objects_529cce9fd2fee5843e1c3aca5fe91651;
static PyCodeObject *code_objects_27806ae690a3e64d19aac73f408c94f7;
static PyCodeObject *code_objects_72561256d1f79b238c75ec50e5a9e28a;
static PyCodeObject *code_objects_f09e6239cbdee60e53e82b5dc905fa5f;
static PyCodeObject *code_objects_5c72fd4321a6821f836294db227fcccb;
static PyCodeObject *code_objects_6ccf224f5cfa0d801a3b4c692f156720;
static PyCodeObject *code_objects_b4ecb34738dea556cb922e23c81d54bc;
static PyCodeObject *code_objects_118e8e6ae2bd1bf8bd847f93db839e45;
static PyCodeObject *code_objects_2d7b44dcf46aedde1a05937fbddaa787;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[75]); CHECK_OBJECT(module_filename_obj);
    code_objects_5846d89cac8cb6a12d9abc6691f40aa0 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[76], mod_consts[76], NULL, NULL, 0, 0, 0);
    code_objects_b8c0d8ef21243b9442223c3d582419bb = MAKE_CODE_OBJECT(module_filename_obj, 8, CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[77], NULL, 0, 0, 0);
    code_objects_ee51064bb7896fe14eb189ce958d2fc7 = MAKE_CODE_OBJECT(module_filename_obj, 9, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[7], mod_consts[65], mod_consts[78], mod_consts[77], 2, 0, 0);
    code_objects_16b9f90f650e2563f8e4d2430eb79ab2 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[67], mod_consts[79], NULL, 2, 0, 0);
    code_objects_a1f7e452bf478d0305f45a9fe59bcbd9 = MAKE_CODE_OBJECT(module_filename_obj, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[59], mod_consts[80], NULL, 1, 0, 0);
    code_objects_24c71192453f9b1f4d14d28ed49fd6a7 = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[68], mod_consts[81], NULL, 2, 0, 0);
    code_objects_529cce9fd2fee5843e1c3aca5fe91651 = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[69], mod_consts[82], NULL, 2, 0, 0);
    code_objects_27806ae690a3e64d19aac73f408c94f7 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[71], mod_consts[83], NULL, 1, 0, 0);
    code_objects_72561256d1f79b238c75ec50e5a9e28a = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[72], mod_consts[84], NULL, 1, 0, 0);
    code_objects_f09e6239cbdee60e53e82b5dc905fa5f = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[27], mod_consts[70], mod_consts[82], NULL, 2, 0, 0);
    code_objects_5c72fd4321a6821f836294db227fcccb = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[35], mod_consts[85], NULL, 3, 0, 0);
    code_objects_6ccf224f5cfa0d801a3b4c692f156720 = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[37], mod_consts[85], NULL, 3, 0, 0);
    code_objects_b4ecb34738dea556cb922e23c81d54bc = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[73], mod_consts[80], NULL, 1, 0, 0);
    code_objects_118e8e6ae2bd1bf8bd847f93db839e45 = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[86], NULL, 1, 0, 0);
    code_objects_2d7b44dcf46aedde1a05937fbddaa787 = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[87], NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_dlx_solver$$$function__10_sudoku_to_exact_cover(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_dlx_solver$$$function__11_solve_sudoku(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_dlx_solver$$$function__1___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_dlx_solver$$$function__2___init__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_dlx_solver$$$function__3___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_dlx_solver$$$function__4__build_linked_matrix(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_dlx_solver$$$function__5__cover(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_dlx_solver$$$function__6__uncover(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_dlx_solver$$$function__7__search(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_dlx_solver$$$function__8__select_column(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_dlx_solver$$$function__9_solve(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_dlx_solver$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    struct Nuitka_FrameObject *frame_frame_dlx_solver$$$function__1___init__;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_frame_dlx_solver$$$function__1___init__ = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_self);
        tmp_assign_source_1 = par_self;
        assert(tmp_assign_unpack_1__assign_source == NULL);
        Py_INCREF(tmp_assign_source_1);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_1;
    }
    if (isFrameUnusable(cache_frame_frame_dlx_solver$$$function__1___init__)) {
        Py_XDECREF(cache_frame_frame_dlx_solver$$$function__1___init__);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_dlx_solver$$$function__1___init__ == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_dlx_solver$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a1f7e452bf478d0305f45a9fe59bcbd9, module_dlx_solver, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_dlx_solver$$$function__1___init__->m_type_description == NULL);
    frame_frame_dlx_solver$$$function__1___init__ = cache_frame_frame_dlx_solver$$$function__1___init__;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_dlx_solver$$$function__1___init__);
    assert(Py_REFCNT(frame_frame_dlx_solver$$$function__1___init__) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assattr_value_1 = tmp_assign_unpack_1__assign_source;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assattr_value_2 = tmp_assign_unpack_1__assign_source;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assattr_value_3 = tmp_assign_unpack_1__assign_source;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assattr_value_4 = tmp_assign_unpack_1__assign_source;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[3], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assattr_value_5 = tmp_assign_unpack_1__assign_source;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[4], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = const_int_neg_1;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[5], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_dlx_solver$$$function__1___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_dlx_solver$$$function__1___init__->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_dlx_solver$$$function__1___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_dlx_solver$$$function__1___init__,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_frame_dlx_solver$$$function__1___init__ == cache_frame_frame_dlx_solver$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_dlx_solver$$$function__1___init__);
        cache_frame_frame_dlx_solver$$$function__1___init__ = NULL;
    }

    assertFrameObject(frame_frame_dlx_solver$$$function__1___init__);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_dlx_solver$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_frame_dlx_solver$$$function__2___init__;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_frame_dlx_solver$$$function__2___init__ = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_dlx_solver$$$function__2___init__)) {
        Py_XDECREF(cache_frame_frame_dlx_solver$$$function__2___init__);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_dlx_solver$$$function__2___init__ == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_dlx_solver$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ee51064bb7896fe14eb189ce958d2fc7, module_dlx_solver, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_dlx_solver$$$function__2___init__->m_type_description == NULL);
    frame_frame_dlx_solver$$$function__2___init__ = cache_frame_frame_dlx_solver$$$function__2___init__;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_dlx_solver$$$function__2___init__);
    assert(Py_REFCNT(frame_frame_dlx_solver$$$function__2___init__) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[6]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 10;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_dlx_solver, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_frame_dlx_solver$$$function__2___init__->m_frame.f_lineno = 10;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[7]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_name);
        tmp_assattr_value_1 = par_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[8], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 11;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = const_int_0;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[9], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_dlx_solver$$$function__2___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_dlx_solver$$$function__2___init__->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_dlx_solver$$$function__2___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_dlx_solver$$$function__2___init__,
        type_description_1,
        par_self,
        par_name,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_frame_dlx_solver$$$function__2___init__ == cache_frame_frame_dlx_solver$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_dlx_solver$$$function__2___init__);
        cache_frame_frame_dlx_solver$$$function__2___init__ = NULL;
    }

    assertFrameObject(frame_frame_dlx_solver$$$function__2___init__);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_dlx_solver$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_matrix = python_pars[1];
    struct Nuitka_FrameObject *frame_frame_dlx_solver$$$function__3___init__;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_dlx_solver$$$function__3___init__ = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_dlx_solver$$$function__3___init__)) {
        Py_XDECREF(cache_frame_frame_dlx_solver$$$function__3___init__);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_dlx_solver$$$function__3___init__ == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_dlx_solver$$$function__3___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_16b9f90f650e2563f8e4d2430eb79ab2, module_dlx_solver, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_dlx_solver$$$function__3___init__->m_type_description == NULL);
    frame_frame_dlx_solver$$$function__3___init__ = cache_frame_frame_dlx_solver$$$function__3___init__;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_dlx_solver$$$function__3___init__);
    assert(Py_REFCNT(frame_frame_dlx_solver$$$function__3___init__) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = MAKE_LIST_EMPTY(tstate, 0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 16;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_matrix);
        tmp_args_element_value_1 = par_matrix;
        frame_frame_dlx_solver$$$function__3___init__->m_frame.f_lineno = 17;
        tmp_assattr_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[11], tmp_args_element_value_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 17;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[12], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 17;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_dlx_solver$$$function__3___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_dlx_solver$$$function__3___init__->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_dlx_solver$$$function__3___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_dlx_solver$$$function__3___init__,
        type_description_1,
        par_self,
        par_matrix
    );


    // Release cached frame if used for exception.
    if (frame_frame_dlx_solver$$$function__3___init__ == cache_frame_frame_dlx_solver$$$function__3___init__) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_dlx_solver$$$function__3___init__);
        cache_frame_frame_dlx_solver$$$function__3___init__ = NULL;
    }

    assertFrameObject(frame_frame_dlx_solver$$$function__3___init__);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_matrix);
    Py_DECREF(par_matrix);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_matrix);
    Py_DECREF(par_matrix);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_dlx_solver$$$function__4__build_linked_matrix(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_matrix = python_pars[1];
    PyObject *var_cols = NULL;
    PyObject *var_head = NULL;
    PyObject *var_column_nodes = NULL;
    PyObject *var_last = NULL;
    PyObject *var_i = NULL;
    PyObject *var_col = NULL;
    PyObject *var_row = NULL;
    PyObject *var_first = NULL;
    PyObject *var_j = NULL;
    PyObject *var_val = NULL;
    PyObject *var_node = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_dlx_solver$$$function__4__build_linked_matrix;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_frame_dlx_solver$$$function__4__build_linked_matrix = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_dlx_solver$$$function__4__build_linked_matrix)) {
        Py_XDECREF(cache_frame_frame_dlx_solver$$$function__4__build_linked_matrix);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_dlx_solver$$$function__4__build_linked_matrix == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_dlx_solver$$$function__4__build_linked_matrix = MAKE_FUNCTION_FRAME(tstate, code_objects_24c71192453f9b1f4d14d28ed49fd6a7, module_dlx_solver, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_dlx_solver$$$function__4__build_linked_matrix->m_type_description == NULL);
    frame_frame_dlx_solver$$$function__4__build_linked_matrix = cache_frame_frame_dlx_solver$$$function__4__build_linked_matrix;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_dlx_solver$$$function__4__build_linked_matrix);
    assert(Py_REFCNT(frame_frame_dlx_solver$$$function__4__build_linked_matrix) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_matrix);
        tmp_expression_value_1 = par_matrix;
        tmp_subscript_value_1 = const_int_0;
        tmp_len_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_len_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 20;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 20;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cols == NULL);
        var_cols = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = module_var_accessor_dlx_solver$ColumnNode(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[13]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 21;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_dlx_solver$$$function__4__build_linked_matrix->m_frame.f_lineno = 21;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts[14]);

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 21;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_head == NULL);
        var_head = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
        assert(var_column_nodes == NULL);
        var_column_nodes = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(var_head);
        tmp_assign_source_4 = var_head;
        assert(var_last == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_last = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT(var_cols);
        tmp_xrange_low_1 = var_cols;
        tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 25;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 25;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooooo";
                exception_lineno = 25;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_7;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_unicode_arg_1;
        tmp_called_value_2 = module_var_accessor_dlx_solver$ColumnNode(tstate);
        if (unlikely(tmp_called_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[13]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 26;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_i);
        tmp_unicode_arg_1 = var_i;
        tmp_args_element_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 26;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        frame_frame_dlx_solver$$$function__4__build_linked_matrix->m_frame.f_lineno = 26;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 26;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_col;
            var_col = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        if (var_column_nodes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[15]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 27;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_list_arg_value_1 = var_column_nodes;
        CHECK_OBJECT(var_col);
        tmp_item_value_1 = var_col;
        tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_col);
        tmp_assattr_value_1 = var_col;
        if (var_last == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[16]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 28;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_assattr_target_1 = var_last;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 28;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        if (var_last == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[16]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 29;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_assattr_value_2 = var_last;
        CHECK_OBJECT(var_col);
        tmp_assattr_target_2 = var_col;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[0], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 29;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(var_col);
        tmp_assign_source_9 = var_col;
        {
            PyObject *old = var_last;
            var_last = tmp_assign_source_9;
            Py_INCREF(var_last);
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 25;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(var_head);
        tmp_assattr_value_3 = var_head;
        if (var_last == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[16]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 31;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = var_last;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[1], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 31;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        if (var_last == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[16]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 32;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_4 = var_last;
        CHECK_OBJECT(var_head);
        tmp_assattr_target_4 = var_head;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[0], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 32;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_3 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_matrix);
        tmp_args_element_value_2 = par_matrix;
        frame_frame_dlx_solver$$$function__4__build_linked_matrix->m_frame.f_lineno = 34;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 34;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 34;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_10;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_11 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooooo";
                exception_lineno = 34;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
        tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 34;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 34;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 34;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 34;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_15;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_row;
            var_row = tmp_assign_source_16;
            Py_INCREF(var_row);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = Py_None;
        {
            PyObject *old = var_first;
            var_first = tmp_assign_source_17;
            Py_INCREF(var_first);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_4 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(var_row);
        tmp_args_element_value_3 = var_row;
        frame_frame_dlx_solver$$$function__4__build_linked_matrix->m_frame.f_lineno = 36;
        tmp_iter_arg_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 36;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_18 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 36;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_19 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_19 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooooo";
                exception_lineno = 36;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_iter_arg_5 = tmp_for_loop_3__iter_value;
        tmp_assign_source_20 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 36;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 36;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 36;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 36;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_8;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_7;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_23 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_23;
            Py_INCREF(var_j);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_24 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_val;
            var_val = tmp_assign_source_24;
            Py_INCREF(var_val);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_val);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_val);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 37;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        if (var_column_nodes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[15]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 38;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_2 = var_column_nodes;
        CHECK_OBJECT(var_j);
        tmp_subscript_value_2 = var_j;
        tmp_assign_source_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 38;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_col;
            var_col = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_5;
        tmp_called_value_5 = module_var_accessor_dlx_solver$Node(tstate);
        if (unlikely(tmp_called_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[17]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 39;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        frame_frame_dlx_solver$$$function__4__build_linked_matrix->m_frame.f_lineno = 39;
        tmp_assign_source_26 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 39;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_node;
            var_node = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[18]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 40;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_assattr_value_5 = var_i;
        CHECK_OBJECT(var_node);
        tmp_assattr_target_5 = var_node;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[5], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 40;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(var_col);
        tmp_assattr_value_6 = var_col;
        CHECK_OBJECT(var_node);
        tmp_assattr_target_6 = var_node;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[4], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 41;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (var_first == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[19]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 43;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_cmp_expr_left_1 = var_first;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(var_node);
        tmp_assign_source_27 = var_node;
        {
            PyObject *old = var_first;
            var_first = tmp_assign_source_27;
            Py_INCREF(var_first);
            Py_XDECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_7;
        if (var_first == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[19]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 46;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_3 = var_first;
        tmp_assattr_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_assattr_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_node);
        tmp_assattr_target_7 = var_node;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[0], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        if (var_first == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[19]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 47;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_assattr_value_8 = var_first;
        CHECK_OBJECT(var_node);
        tmp_assattr_target_8 = var_node;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[1], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_node);
        tmp_assattr_value_9 = var_node;
        if (var_first == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[19]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 48;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_4 = var_first;
        tmp_assattr_target_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[0]);
        if (tmp_assattr_target_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[1], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_target_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(var_node);
        tmp_assattr_value_10 = var_node;
        if (var_first == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[19]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 49;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_assattr_target_10 = var_first;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[0], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
    }
    branch_end_2:;
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(var_col);
        tmp_expression_value_5 = var_col;
        tmp_assattr_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[2]);
        if (tmp_assattr_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_node);
        tmp_assattr_target_11 = var_node;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[2], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(var_col);
        tmp_assattr_value_12 = var_col;
        CHECK_OBJECT(var_node);
        tmp_assattr_target_12 = var_node;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[3], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_node);
        tmp_assattr_value_13 = var_node;
        CHECK_OBJECT(var_col);
        tmp_expression_value_6 = var_col;
        tmp_assattr_target_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[2]);
        if (tmp_assattr_target_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[3], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_target_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        CHECK_OBJECT(var_node);
        tmp_assattr_value_14 = var_node;
        CHECK_OBJECT(var_col);
        tmp_assattr_target_14 = var_col;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[2], tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 54;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_col);
        tmp_expression_value_7 = var_col;
        tmp_assign_source_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[9]);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_inplace_assign_1__value;
            tmp_inplace_assign_1__value = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = const_int_pos_1;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_29 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_29;

    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_15 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(var_col);
        tmp_assattr_target_15 = var_col;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[9], tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_9;
        }
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_6;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    branch_no_1:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 36;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_7 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_7 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_3;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 34;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_8 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_8 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_dlx_solver$$$function__4__build_linked_matrix, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_dlx_solver$$$function__4__build_linked_matrix->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_dlx_solver$$$function__4__build_linked_matrix, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_dlx_solver$$$function__4__build_linked_matrix,
        type_description_1,
        par_self,
        par_matrix,
        var_cols,
        var_head,
        var_column_nodes,
        var_last,
        var_i,
        var_col,
        var_row,
        var_first,
        var_j,
        var_val,
        var_node
    );


    // Release cached frame if used for exception.
    if (frame_frame_dlx_solver$$$function__4__build_linked_matrix == cache_frame_frame_dlx_solver$$$function__4__build_linked_matrix) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_dlx_solver$$$function__4__build_linked_matrix);
        cache_frame_frame_dlx_solver$$$function__4__build_linked_matrix = NULL;
    }

    assertFrameObject(frame_frame_dlx_solver$$$function__4__build_linked_matrix);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    CHECK_OBJECT(var_head);
    tmp_return_value = var_head;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_cols);
    Py_DECREF(var_cols);
    var_cols = NULL;
    CHECK_OBJECT(var_head);
    Py_DECREF(var_head);
    var_head = NULL;
    Py_XDECREF(var_column_nodes);
    var_column_nodes = NULL;
    Py_XDECREF(var_last);
    var_last = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_col);
    var_col = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
    Py_XDECREF(var_first);
    var_first = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
    Py_XDECREF(var_node);
    var_node = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_9 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_9 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_cols);
    var_cols = NULL;
    Py_XDECREF(var_head);
    var_head = NULL;
    Py_XDECREF(var_column_nodes);
    var_column_nodes = NULL;
    Py_XDECREF(var_last);
    var_last = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_col);
    var_col = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
    Py_XDECREF(var_first);
    var_first = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
    Py_XDECREF(var_node);
    var_node = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_matrix);
    Py_DECREF(par_matrix);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_matrix);
    Py_DECREF(par_matrix);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_dlx_solver$$$function__5__cover(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_col = python_pars[1];
    PyObject *var_i = NULL;
    PyObject *var_j = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_frame_dlx_solver$$$function__5__cover;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_frame_dlx_solver$$$function__5__cover = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_dlx_solver$$$function__5__cover)) {
        Py_XDECREF(cache_frame_frame_dlx_solver$$$function__5__cover);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_dlx_solver$$$function__5__cover == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_dlx_solver$$$function__5__cover = MAKE_FUNCTION_FRAME(tstate, code_objects_529cce9fd2fee5843e1c3aca5fe91651, module_dlx_solver, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_dlx_solver$$$function__5__cover->m_type_description == NULL);
    frame_frame_dlx_solver$$$function__5__cover = cache_frame_frame_dlx_solver$$$function__5__cover;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_dlx_solver$$$function__5__cover);
    assert(Py_REFCNT(frame_frame_dlx_solver$$$function__5__cover) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_col);
        tmp_expression_value_1 = par_col;
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_col);
        tmp_expression_value_2 = par_col;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_assattr_value_1);

            exception_lineno = 59;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_col);
        tmp_expression_value_3 = par_col;
        tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[1]);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_col);
        tmp_expression_value_4 = par_col;
        tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[0]);
        if (tmp_assattr_target_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_assattr_value_2);

            exception_lineno = 60;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_target_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_col);
        tmp_expression_value_5 = par_col;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[3]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_i == NULL);
        var_i = tmp_assign_source_1;
    }
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[18]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = var_i;
        CHECK_OBJECT(par_col);
        tmp_cmp_expr_right_1 = par_col;
        tmp_operand_value_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_6;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[18]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 63;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = var_i;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[1]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    loop_start_2:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 64;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = var_j;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[18]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 64;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_2 = var_i;
        tmp_operand_value_2 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 64;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 64;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_value_8;
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = var_j;
        tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[2]);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (var_j == NULL) {
            Py_DECREF(tmp_assattr_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = var_j;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[3]);
        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_value_10;
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 66;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = var_j;
        tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[3]);
        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 66;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (var_j == NULL) {
            Py_DECREF(tmp_assattr_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 66;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = var_j;
        tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[2]);
        if (tmp_assattr_target_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 66;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[3], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 66;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 67;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = var_j;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[4]);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 67;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[9]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 67;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_inplace_assign_1__value;
            tmp_inplace_assign_1__value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_isub_expr_left_1;
        PyObject *tmp_isub_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_isub_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_isub_expr_right_1 = const_int_pos_1;
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 67;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = tmp_isub_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_4;

    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_5 = tmp_inplace_assign_1__value;
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 67;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_13 = var_j;
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[4]);
        if (tmp_assattr_target_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 67;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[9], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_target_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 67;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_14;
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 68;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = var_j;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[1]);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 68;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 64;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_15;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[18]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 69;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = var_i;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[3]);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 69;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 62;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_dlx_solver$$$function__5__cover, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_dlx_solver$$$function__5__cover->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_dlx_solver$$$function__5__cover, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_dlx_solver$$$function__5__cover,
        type_description_1,
        par_self,
        par_col,
        var_i,
        var_j
    );


    // Release cached frame if used for exception.
    if (frame_frame_dlx_solver$$$function__5__cover == cache_frame_frame_dlx_solver$$$function__5__cover) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_dlx_solver$$$function__5__cover);
        cache_frame_frame_dlx_solver$$$function__5__cover = NULL;
    }

    assertFrameObject(frame_frame_dlx_solver$$$function__5__cover);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_col);
    Py_DECREF(par_col);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_col);
    Py_DECREF(par_col);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_dlx_solver$$$function__6__uncover(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_col = python_pars[1];
    PyObject *var_i = NULL;
    PyObject *var_j = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_frame_dlx_solver$$$function__6__uncover;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_frame_dlx_solver$$$function__6__uncover = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_dlx_solver$$$function__6__uncover)) {
        Py_XDECREF(cache_frame_frame_dlx_solver$$$function__6__uncover);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_dlx_solver$$$function__6__uncover == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_dlx_solver$$$function__6__uncover = MAKE_FUNCTION_FRAME(tstate, code_objects_f09e6239cbdee60e53e82b5dc905fa5f, module_dlx_solver, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_dlx_solver$$$function__6__uncover->m_type_description == NULL);
    frame_frame_dlx_solver$$$function__6__uncover = cache_frame_frame_dlx_solver$$$function__6__uncover;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_dlx_solver$$$function__6__uncover);
    assert(Py_REFCNT(frame_frame_dlx_solver$$$function__6__uncover) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_col);
        tmp_expression_value_1 = par_col;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 72;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_i == NULL);
        var_i = tmp_assign_source_1;
    }
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[18]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = var_i;
        CHECK_OBJECT(par_col);
        tmp_cmp_expr_right_1 = par_col;
        tmp_operand_value_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[18]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 74;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = var_i;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 74;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    loop_start_2:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = var_j;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[18]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_2 = var_i;
        tmp_operand_value_2 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 76;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = var_j;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[4]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 76;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[9]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 76;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_inplace_assign_1__value;
            tmp_inplace_assign_1__value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = const_int_pos_1;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 76;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_4;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 76;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = var_j;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[4]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 76;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[9], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 76;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_expression_value_6;
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_2 = var_j;
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = var_j;
        tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[3]);
        if (tmp_assattr_target_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[2], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_target_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_value_7;
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 78;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_3 = var_j;
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 78;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = var_j;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[2]);
        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 78;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[3], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 78;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_8;
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 79;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = var_j;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[0]);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 79;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 75;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_9;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[18]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 80;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = var_i;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[2]);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 80;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 73;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(par_col);
        tmp_assattr_value_4 = par_col;
        CHECK_OBJECT(par_col);
        tmp_expression_value_10 = par_col;
        tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[1]);
        if (tmp_assattr_target_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 81;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[0], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 81;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(par_col);
        tmp_assattr_value_5 = par_col;
        CHECK_OBJECT(par_col);
        tmp_expression_value_11 = par_col;
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[0]);
        if (tmp_assattr_target_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 82;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[1], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_target_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 82;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_dlx_solver$$$function__6__uncover, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_dlx_solver$$$function__6__uncover->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_dlx_solver$$$function__6__uncover, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_dlx_solver$$$function__6__uncover,
        type_description_1,
        par_self,
        par_col,
        var_i,
        var_j
    );


    // Release cached frame if used for exception.
    if (frame_frame_dlx_solver$$$function__6__uncover == cache_frame_frame_dlx_solver$$$function__6__uncover) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_dlx_solver$$$function__6__uncover);
        cache_frame_frame_dlx_solver$$$function__6__uncover = NULL;
    }

    assertFrameObject(frame_frame_dlx_solver$$$function__6__uncover);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_col);
    Py_DECREF(par_col);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_col);
    Py_DECREF(par_col);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_dlx_solver$$$function__7__search(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_col = NULL;
    PyObject *var_r = NULL;
    PyObject *var_j = NULL;
    struct Nuitka_FrameObject *frame_frame_dlx_solver$$$function__7__search;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_frame_dlx_solver$$$function__7__search = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_dlx_solver$$$function__7__search)) {
        Py_XDECREF(cache_frame_frame_dlx_solver$$$function__7__search);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_dlx_solver$$$function__7__search == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_dlx_solver$$$function__7__search = MAKE_FUNCTION_FRAME(tstate, code_objects_27806ae690a3e64d19aac73f408c94f7, module_dlx_solver, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_dlx_solver$$$function__7__search->m_type_description == NULL);
    frame_frame_dlx_solver$$$function__7__search = cache_frame_frame_dlx_solver$$$function__7__search;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_dlx_solver$$$function__7__search);
    assert(Py_REFCNT(frame_frame_dlx_solver$$$function__7__search) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[12]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 85;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 85;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[12]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 85;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 85;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_frame_dlx_solver$$$function__7__search->m_frame.f_lineno = 88;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[21]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 88;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_col == NULL);
        var_col = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_col);
        tmp_args_element_value_1 = var_col;
        frame_frame_dlx_solver$$$function__7__search->m_frame.f_lineno = 89;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[22], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 89;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_col);
        tmp_expression_value_4 = var_col;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[3]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 91;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_2;
    }
    loop_start_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 92;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = var_r;
        CHECK_OBJECT(var_col);
        tmp_cmp_expr_right_2 = var_col;
        tmp_operand_value_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 92;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 92;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_end_1;
    branch_no_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_7;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[24]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 93;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[10]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 93;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[25]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 93;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (var_r == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 93;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = var_r;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[5]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 93;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_frame_dlx_solver$$$function__7__search->m_frame.f_lineno = 93;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 93;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_8;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 95;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = var_r;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[1]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 95;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    loop_start_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 96;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_3 = var_j;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 96;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_3 = var_r;
        tmp_operand_value_2 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 96;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 96;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto loop_end_2;
    branch_no_3:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[24]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 97;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[22]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 97;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (var_j == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 97;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = var_j;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[4]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 97;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_frame_dlx_solver$$$function__7__search->m_frame.f_lineno = 97;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 97;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_11;
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = var_j;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[1]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 96;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        int tmp_truth_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[24]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 100;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_self;
        frame_frame_dlx_solver$$$function__7__search->m_frame.f_lineno = 100;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[26]);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 100;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_4);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_4);

            exception_lineno = 100;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_12;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = var_r;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[0]);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    loop_start_3:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 104;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_4 = var_j;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 104;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_4 = var_r;
        tmp_operand_value_3 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_operand_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 104;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 104;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    goto loop_end_3;
    branch_no_5:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_14;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[24]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 105;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[27]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 105;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (var_j == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 105;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = var_j;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[4]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 105;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_frame_dlx_solver$$$function__7__search->m_frame.f_lineno = 105;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 105;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_15;
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 106;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = var_j;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[0]);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 106;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 104;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_3;
    loop_end_3:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[24]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 108;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_17 = par_self;
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[10]);
        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 108;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[28]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 108;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_frame_dlx_solver$$$function__7__search->m_frame.f_lineno = 108;
        tmp_call_result_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 108;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_18;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = var_r;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[3]);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 92;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[24]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 111;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_col);
        tmp_args_element_value_5 = var_col;
        frame_frame_dlx_solver$$$function__7__search->m_frame.f_lineno = 111;
        tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[27], tmp_args_element_value_5);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 111;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_dlx_solver$$$function__7__search, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_dlx_solver$$$function__7__search->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_dlx_solver$$$function__7__search, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_dlx_solver$$$function__7__search,
        type_description_1,
        par_self,
        var_col,
        var_r,
        var_j
    );


    // Release cached frame if used for exception.
    if (frame_frame_dlx_solver$$$function__7__search == cache_frame_frame_dlx_solver$$$function__7__search) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_dlx_solver$$$function__7__search);
        cache_frame_frame_dlx_solver$$$function__7__search = NULL;
    }

    assertFrameObject(frame_frame_dlx_solver$$$function__7__search);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_col);
    var_col = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_col);
    var_col = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_dlx_solver$$$function__8__select_column(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_min_size = NULL;
    PyObject *var_chosen = NULL;
    PyObject *var_col = NULL;
    struct Nuitka_FrameObject *frame_frame_dlx_solver$$$function__8__select_column;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_dlx_solver$$$function__8__select_column = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[29];
        assert(var_min_size == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_min_size = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_None;
        assert(var_chosen == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_chosen = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_dlx_solver$$$function__8__select_column)) {
        Py_XDECREF(cache_frame_frame_dlx_solver$$$function__8__select_column);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_dlx_solver$$$function__8__select_column == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_dlx_solver$$$function__8__select_column = MAKE_FUNCTION_FRAME(tstate, code_objects_72561256d1f79b238c75ec50e5a9e28a, module_dlx_solver, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_dlx_solver$$$function__8__select_column->m_type_description == NULL);
    frame_frame_dlx_solver$$$function__8__select_column = cache_frame_frame_dlx_solver$$$function__8__select_column;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_dlx_solver$$$function__8__select_column);
    assert(Py_REFCNT(frame_frame_dlx_solver$$$function__8__select_column) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[12]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 117;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 117;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_col == NULL);
        var_col = tmp_assign_source_3;
    }
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        if (var_col == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[30]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 118;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = var_col;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[24]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 118;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[12]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 118;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 118;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 118;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_4;
        if (var_col == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[30]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = var_col;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[9]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (var_min_size == NULL) {
            Py_DECREF(tmp_cmp_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[31]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_2 = var_min_size;
        tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_5;
        if (var_col == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[30]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = var_col;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[9]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_min_size;
            var_min_size = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        if (var_col == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[30]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_5 = var_col;
        {
            PyObject *old = var_chosen;
            var_chosen = tmp_assign_source_5;
            Py_INCREF(var_chosen);
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_6;
        if (var_col == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[30]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = var_col;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[1]);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_col;
            var_col = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 118;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    if (var_chosen == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[32]);
        NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
        CHAIN_EXCEPTION(tstate, exception_state.exception_value);

        exception_lineno = 123;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_chosen;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_dlx_solver$$$function__8__select_column, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_dlx_solver$$$function__8__select_column->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_dlx_solver$$$function__8__select_column, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_dlx_solver$$$function__8__select_column,
        type_description_1,
        par_self,
        var_min_size,
        var_chosen,
        var_col
    );


    // Release cached frame if used for exception.
    if (frame_frame_dlx_solver$$$function__8__select_column == cache_frame_frame_dlx_solver$$$function__8__select_column) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_dlx_solver$$$function__8__select_column);
        cache_frame_frame_dlx_solver$$$function__8__select_column = NULL;
    }

    assertFrameObject(frame_frame_dlx_solver$$$function__8__select_column);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_min_size);
    var_min_size = NULL;
    Py_XDECREF(var_chosen);
    var_chosen = NULL;
    Py_XDECREF(var_col);
    var_col = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_min_size);
    var_min_size = NULL;
    Py_XDECREF(var_chosen);
    var_chosen = NULL;
    Py_XDECREF(var_col);
    var_col = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_dlx_solver$$$function__9_solve(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_dlx_solver$$$function__9_solve;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_dlx_solver$$$function__9_solve = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_dlx_solver$$$function__9_solve)) {
        Py_XDECREF(cache_frame_frame_dlx_solver$$$function__9_solve);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_dlx_solver$$$function__9_solve == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_dlx_solver$$$function__9_solve = MAKE_FUNCTION_FRAME(tstate, code_objects_b4ecb34738dea556cb922e23c81d54bc, module_dlx_solver, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_dlx_solver$$$function__9_solve->m_type_description == NULL);
    frame_frame_dlx_solver$$$function__9_solve = cache_frame_frame_dlx_solver$$$function__9_solve;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_dlx_solver$$$function__9_solve);
    assert(Py_REFCNT(frame_frame_dlx_solver$$$function__9_solve) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_frame_dlx_solver$$$function__9_solve->m_frame.f_lineno = 126;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[26]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[10]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 127;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_dlx_solver$$$function__9_solve, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_dlx_solver$$$function__9_solve->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_dlx_solver$$$function__9_solve, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_dlx_solver$$$function__9_solve,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_frame_dlx_solver$$$function__9_solve == cache_frame_frame_dlx_solver$$$function__9_solve) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_dlx_solver$$$function__9_solve);
        cache_frame_frame_dlx_solver$$$function__9_solve = NULL;
    }

    assertFrameObject(frame_frame_dlx_solver$$$function__9_solve);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_dlx_solver$$$function__10_sudoku_to_exact_cover(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_board = python_pars[0];
    PyObject *var_R = NULL;
    PyObject *var_C = NULL;
    PyObject *var_N = NULL;
    PyObject *var_cell_index = NULL;
    PyObject *var_row_index = NULL;
    PyObject *var_matrix = NULL;
    PyObject *var_r = NULL;
    PyObject *var_c = NULL;
    PyObject *var_n = NULL;
    PyObject *var_row = NULL;
    PyObject *outline_0_var__ = NULL;
    PyObject *outline_1_var__ = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_listcomp$$36$listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp$$36$listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp$$36$listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    static struct Nuitka_FrameObject *cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = mod_consts[33];
        tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover)) {
        Py_XDECREF(cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover = MAKE_FUNCTION_FRAME(tstate, code_objects_2d7b44dcf46aedde1a05937fbddaa787, module_dlx_solver, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover->m_type_description == NULL);
    frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover = cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover);
    assert(Py_REFCNT(frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover) == 2);

    // Framed code:
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 134;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 134;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 134;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 134;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_R == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_R = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_C == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_C = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert(var_N == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_N = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index(tstate);

        assert(var_cell_index == NULL);
        var_cell_index = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index(tstate);

        assert(var_row_index == NULL);
        var_row_index = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_2;
            tmp_iter_arg_2 = mod_consts[38];
            tmp_assign_source_11 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
            assert(!(tmp_assign_source_11 == NULL));
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = MAKE_LIST_EMPTY(tstate, 0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_12;
        }
        // Tried code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_13 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
            if (tmp_assign_source_13 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                    type_description_1 = "ooooooooooo";
                    exception_lineno = 138;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_14 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var__;
                outline_0_var__ = tmp_assign_source_14;
                Py_INCREF(outline_0_var__);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            {
                PyObject *tmp_assign_source_15;
                PyObject *tmp_iter_arg_3;
                tmp_iter_arg_3 = mod_consts[39];
                tmp_assign_source_15 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
                assert(!(tmp_assign_source_15 == NULL));
                {
                    PyObject *old = tmp_listcomp$$36$listcomp_1__$0;
                    tmp_listcomp$$36$listcomp_1__$0 = tmp_assign_source_15;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_16;
                tmp_assign_source_16 = MAKE_LIST_EMPTY(tstate, 0);
                {
                    PyObject *old = tmp_listcomp$$36$listcomp_1__contraction;
                    tmp_listcomp$$36$listcomp_1__contraction = tmp_assign_source_16;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            // Tried code:
            loop_start_2:;
            {
                PyObject *tmp_next_source_2;
                PyObject *tmp_assign_source_17;
                CHECK_OBJECT(tmp_listcomp$$36$listcomp_1__$0);
                tmp_next_source_2 = tmp_listcomp$$36$listcomp_1__$0;
                tmp_assign_source_17 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
                if (tmp_assign_source_17 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                        goto loop_end_2;
                    } else {

                        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                        type_description_1 = "ooooooooooo";
                        exception_lineno = 138;
                        goto try_except_handler_7;
                    }
                }

                {
                    PyObject *old = tmp_listcomp$$36$listcomp_1__iter_value_0;
                    tmp_listcomp$$36$listcomp_1__iter_value_0 = tmp_assign_source_17;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_18;
                CHECK_OBJECT(tmp_listcomp$$36$listcomp_1__iter_value_0);
                tmp_assign_source_18 = tmp_listcomp$$36$listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_1_var__;
                    outline_1_var__ = tmp_assign_source_18;
                    Py_INCREF(outline_1_var__);
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_append_list_2;
                PyObject *tmp_append_value_2;
                CHECK_OBJECT(tmp_listcomp$$36$listcomp_1__contraction);
                tmp_append_list_2 = tmp_listcomp$$36$listcomp_1__contraction;
                tmp_append_value_2 = const_int_0;
                tmp_result = LIST_APPEND0(tmp_append_list_2, tmp_append_value_2);
                if (tmp_result == false) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 138;
                    type_description_1 = "ooooooooooo";
                    goto try_except_handler_7;
                }
            }
            if (CONSIDER_THREADING(tstate) == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 138;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_7;
            }
            goto loop_start_2;
            loop_end_2:;
            CHECK_OBJECT(tmp_listcomp$$36$listcomp_1__contraction);
            tmp_append_value_1 = tmp_listcomp$$36$listcomp_1__contraction;
            Py_INCREF(tmp_append_value_1);
            goto try_return_handler_7;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_7:;
            CHECK_OBJECT(tmp_listcomp$$36$listcomp_1__$0);
            Py_DECREF(tmp_listcomp$$36$listcomp_1__$0);
            tmp_listcomp$$36$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp$$36$listcomp_1__contraction);
            Py_DECREF(tmp_listcomp$$36$listcomp_1__contraction);
            tmp_listcomp$$36$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_listcomp$$36$listcomp_1__iter_value_0);
            tmp_listcomp$$36$listcomp_1__iter_value_0 = NULL;
            goto try_return_handler_6;
            // Exception handler code:
            try_except_handler_7:;
            exception_keeper_lineno_3 = exception_lineno;
            exception_lineno = 0;
            exception_keeper_name_3 = exception_state;
            INIT_ERROR_OCCURRED_STATE(&exception_state);

            CHECK_OBJECT(tmp_listcomp$$36$listcomp_1__$0);
            Py_DECREF(tmp_listcomp$$36$listcomp_1__$0);
            tmp_listcomp$$36$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp$$36$listcomp_1__contraction);
            Py_DECREF(tmp_listcomp$$36$listcomp_1__contraction);
            tmp_listcomp$$36$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_listcomp$$36$listcomp_1__iter_value_0);
            tmp_listcomp$$36$listcomp_1__iter_value_0 = NULL;
            // Re-raise.
            exception_state = exception_keeper_name_3;
            exception_lineno = exception_keeper_lineno_3;

            goto try_except_handler_6;
            // End of try:
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_6:;
            Py_XDECREF(outline_1_var__);
            outline_1_var__ = NULL;
            goto outline_result_2;
            // Exception handler code:
            try_except_handler_6:;
            exception_keeper_lineno_4 = exception_lineno;
            exception_lineno = 0;
            exception_keeper_name_4 = exception_state;
            INIT_ERROR_OCCURRED_STATE(&exception_state);

            Py_XDECREF(outline_1_var__);
            outline_1_var__ = NULL;
            // Re-raise.
            exception_state = exception_keeper_name_4;
            exception_lineno = exception_keeper_lineno_4;

            goto outline_exception_2;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_2:;
            exception_lineno = 138;
            goto try_except_handler_5;
            outline_result_2:;
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 138;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 138;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_5;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_10 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_10);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_lineno_5 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_5 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_0_var__);
        outline_0_var__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_lineno_6 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_6 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(outline_0_var__);
        outline_0_var__ = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 138;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_matrix == NULL);
        var_matrix = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_4;
        tmp_iter_arg_4 = mod_consts[40];
        tmp_assign_source_19 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_4);
        assert(!(tmp_assign_source_19 == NULL));
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_19;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_3 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_20 = ITERATOR_NEXT_ITERATOR(tmp_next_source_3);
        if (tmp_assign_source_20 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooo";
                exception_lineno = 140;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_21 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_21;
            Py_INCREF(var_r);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_iter_arg_5;
        tmp_iter_arg_5 = mod_consts[40];
        tmp_assign_source_22 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_5);
        assert(!(tmp_assign_source_22 == NULL));
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_4 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_23 = ITERATOR_NEXT_ITERATOR(tmp_next_source_4);
        if (tmp_assign_source_23 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooo";
                exception_lineno = 141;
                goto try_except_handler_9;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_24 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_24;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_board);
        tmp_expression_value_2 = par_board;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 142;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }

        tmp_subscript_value_1 = var_r;
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 142;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_c);
        tmp_subscript_value_2 = var_c;
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 142;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        tmp_cmp_expr_right_1 = const_int_0;
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 142;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_board);
        tmp_expression_value_4 = par_board;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 143;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }

        tmp_subscript_value_3 = var_r;
        tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 143;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_c);
        tmp_subscript_value_4 = var_c;
        tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 143;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        tmp_sub_expr_right_1 = const_int_pos_1;
        tmp_assign_source_25 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 143;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_n;
            var_n = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (var_cell_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[34]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 144;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }

        tmp_called_value_1 = var_cell_index;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 144;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }

        tmp_args_element_value_1 = var_r;
        CHECK_OBJECT(var_c);
        tmp_args_element_value_2 = var_c;
        CHECK_OBJECT(var_n);
        tmp_args_element_value_3 = var_n;
        frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover->m_frame.f_lineno = 144;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 144;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_row;
            var_row = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_ass_subvalue_1 = const_int_pos_1;
        CHECK_OBJECT(var_matrix);
        tmp_expression_value_5 = var_matrix;
        CHECK_OBJECT(var_row);
        tmp_subscript_value_5 = var_row;
        tmp_ass_subscribed_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 145;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        if (var_r == NULL) {
            Py_DECREF(tmp_ass_subscribed_1);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 145;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }

        tmp_mult_expr_left_1 = var_r;
        tmp_mult_expr_right_1 = mod_consts[41];
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 145;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_c);
        tmp_add_expr_right_1 = var_c;
        tmp_ass_subscript_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_ass_subscript_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 145;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 145;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        tmp_ass_subvalue_2 = const_int_pos_1;
        CHECK_OBJECT(var_matrix);
        tmp_expression_value_6 = var_matrix;
        CHECK_OBJECT(var_row);
        tmp_subscript_value_6 = var_row;
        tmp_ass_subscribed_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_6);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 146;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        tmp_add_expr_left_3 = mod_consts[42];
        if (var_r == NULL) {
            Py_DECREF(tmp_ass_subscribed_2);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 146;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }

        tmp_mult_expr_left_2 = var_r;
        tmp_mult_expr_right_2 = mod_consts[41];
        tmp_add_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_add_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_2);

            exception_lineno = 146;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_2);

            exception_lineno = 146;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_n);
        tmp_add_expr_right_2 = var_n;
        tmp_ass_subscript_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_ass_subscript_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_2);

            exception_lineno = 146;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subscript_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 146;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        tmp_ass_subvalue_3 = const_int_pos_1;
        CHECK_OBJECT(var_matrix);
        tmp_expression_value_7 = var_matrix;
        CHECK_OBJECT(var_row);
        tmp_subscript_value_7 = var_row;
        tmp_ass_subscribed_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_7);
        if (tmp_ass_subscribed_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 147;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        tmp_add_expr_left_5 = mod_consts[43];
        CHECK_OBJECT(var_c);
        tmp_mult_expr_left_3 = var_c;
        tmp_mult_expr_right_3 = mod_consts[41];
        tmp_add_expr_right_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_add_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_3);

            exception_lineno = 147;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_right_5);
        if (tmp_add_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_3);

            exception_lineno = 147;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_n);
        tmp_add_expr_right_4 = var_n;
        tmp_ass_subscript_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        if (tmp_ass_subscript_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_3);

            exception_lineno = 147;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscribed_3);
        Py_DECREF(tmp_ass_subscript_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 147;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_ass_subscript_4;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        PyObject *tmp_floordiv_expr_left_2;
        PyObject *tmp_floordiv_expr_right_2;
        tmp_ass_subvalue_4 = const_int_pos_1;
        CHECK_OBJECT(var_matrix);
        tmp_expression_value_8 = var_matrix;
        CHECK_OBJECT(var_row);
        tmp_subscript_value_8 = var_row;
        tmp_ass_subscribed_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_8);
        if (tmp_ass_subscribed_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 148;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        tmp_add_expr_left_7 = mod_consts[44];
        if (var_r == NULL) {
            Py_DECREF(tmp_ass_subscribed_4);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 148;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }

        tmp_floordiv_expr_left_1 = var_r;
        tmp_floordiv_expr_right_1 = mod_consts[45];
        tmp_mult_expr_left_5 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        if (tmp_mult_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_4);

            exception_lineno = 148;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        tmp_mult_expr_right_5 = mod_consts[45];
        tmp_add_expr_left_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        Py_DECREF(tmp_mult_expr_left_5);
        if (tmp_add_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_4);

            exception_lineno = 148;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_c);
        tmp_floordiv_expr_left_2 = var_c;
        tmp_floordiv_expr_right_2 = mod_consts[45];
        tmp_add_expr_right_8 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
        if (tmp_add_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_4);
            Py_DECREF(tmp_add_expr_left_8);

            exception_lineno = 148;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        tmp_mult_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
        Py_DECREF(tmp_add_expr_left_8);
        Py_DECREF(tmp_add_expr_right_8);
        if (tmp_mult_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_4);

            exception_lineno = 148;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        tmp_mult_expr_right_4 = mod_consts[41];
        tmp_add_expr_right_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        Py_DECREF(tmp_mult_expr_left_4);
        if (tmp_add_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_4);

            exception_lineno = 148;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        tmp_add_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
        Py_DECREF(tmp_add_expr_right_7);
        if (tmp_add_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_4);

            exception_lineno = 148;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_n);
        tmp_add_expr_right_6 = var_n;
        tmp_ass_subscript_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_left_6);
        if (tmp_ass_subscript_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_4);

            exception_lineno = 148;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscribed_4);
        Py_DECREF(tmp_ass_subscript_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 148;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_9;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iter_arg_6;
        tmp_iter_arg_6 = mod_consts[40];
        tmp_assign_source_27 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_6);
        assert(!(tmp_assign_source_27 == NULL));
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_5 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_28 = ITERATOR_NEXT_ITERATOR(tmp_next_source_5);
        if (tmp_assign_source_28 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooo";
                exception_lineno = 150;
                goto try_except_handler_10;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_29 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_n;
            var_n = tmp_assign_source_29;
            Py_INCREF(var_n);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        if (var_cell_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[34]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 151;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }

        tmp_called_value_2 = var_cell_index;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 151;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_4 = var_r;
        if (var_c == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[46]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 151;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_5 = var_c;
        CHECK_OBJECT(var_n);
        tmp_args_element_value_6 = var_n;
        frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 151;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = var_row;
            var_row = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_ass_subscript_5;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        tmp_ass_subvalue_5 = const_int_pos_1;
        CHECK_OBJECT(var_matrix);
        tmp_expression_value_9 = var_matrix;
        CHECK_OBJECT(var_row);
        tmp_subscript_value_9 = var_row;
        tmp_ass_subscribed_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_9);
        if (tmp_ass_subscribed_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 152;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
        if (var_r == NULL) {
            Py_DECREF(tmp_ass_subscribed_5);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 152;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }

        tmp_mult_expr_left_6 = var_r;
        tmp_mult_expr_right_6 = mod_consts[41];
        tmp_add_expr_left_9 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        if (tmp_add_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_5);

            exception_lineno = 152;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
        if (var_c == NULL) {
            Py_DECREF(tmp_ass_subscribed_5);
            Py_DECREF(tmp_add_expr_left_9);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[46]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 152;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }

        tmp_add_expr_right_9 = var_c;
        tmp_ass_subscript_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
        Py_DECREF(tmp_add_expr_left_9);
        if (tmp_ass_subscript_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_5);

            exception_lineno = 152;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subscribed_5);
        Py_DECREF(tmp_ass_subscript_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 152;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_ass_subscript_6;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        tmp_ass_subvalue_6 = const_int_pos_1;
        CHECK_OBJECT(var_matrix);
        tmp_expression_value_10 = var_matrix;
        CHECK_OBJECT(var_row);
        tmp_subscript_value_10 = var_row;
        tmp_ass_subscribed_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_10);
        if (tmp_ass_subscribed_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 153;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
        tmp_add_expr_left_11 = mod_consts[42];
        if (var_r == NULL) {
            Py_DECREF(tmp_ass_subscribed_6);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 153;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }

        tmp_mult_expr_left_7 = var_r;
        tmp_mult_expr_right_7 = mod_consts[41];
        tmp_add_expr_right_11 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        if (tmp_add_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_6);

            exception_lineno = 153;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
        tmp_add_expr_left_10 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_11, tmp_add_expr_right_11);
        Py_DECREF(tmp_add_expr_right_11);
        if (tmp_add_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_6);

            exception_lineno = 153;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(var_n);
        tmp_add_expr_right_10 = var_n;
        tmp_ass_subscript_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
        Py_DECREF(tmp_add_expr_left_10);
        if (tmp_ass_subscript_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_6);

            exception_lineno = 153;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        Py_DECREF(tmp_ass_subscribed_6);
        Py_DECREF(tmp_ass_subscript_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 153;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_ass_subscript_7;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        PyObject *tmp_add_expr_left_13;
        PyObject *tmp_add_expr_right_13;
        PyObject *tmp_mult_expr_left_8;
        PyObject *tmp_mult_expr_right_8;
        tmp_ass_subvalue_7 = const_int_pos_1;
        CHECK_OBJECT(var_matrix);
        tmp_expression_value_11 = var_matrix;
        CHECK_OBJECT(var_row);
        tmp_subscript_value_11 = var_row;
        tmp_ass_subscribed_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_11);
        if (tmp_ass_subscribed_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 154;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
        tmp_add_expr_left_13 = mod_consts[43];
        if (var_c == NULL) {
            Py_DECREF(tmp_ass_subscribed_7);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[46]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 154;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }

        tmp_mult_expr_left_8 = var_c;
        tmp_mult_expr_right_8 = mod_consts[41];
        tmp_add_expr_right_13 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
        if (tmp_add_expr_right_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_7);

            exception_lineno = 154;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
        tmp_add_expr_left_12 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_13, tmp_add_expr_right_13);
        Py_DECREF(tmp_add_expr_right_13);
        if (tmp_add_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_7);

            exception_lineno = 154;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(var_n);
        tmp_add_expr_right_12 = var_n;
        tmp_ass_subscript_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_12, tmp_add_expr_right_12);
        Py_DECREF(tmp_add_expr_left_12);
        if (tmp_ass_subscript_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_7);

            exception_lineno = 154;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        Py_DECREF(tmp_ass_subscribed_7);
        Py_DECREF(tmp_ass_subscript_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 154;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
    }
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_ass_subscript_8;
        PyObject *tmp_add_expr_left_14;
        PyObject *tmp_add_expr_right_14;
        PyObject *tmp_add_expr_left_15;
        PyObject *tmp_add_expr_right_15;
        PyObject *tmp_mult_expr_left_9;
        PyObject *tmp_mult_expr_right_9;
        PyObject *tmp_add_expr_left_16;
        PyObject *tmp_add_expr_right_16;
        PyObject *tmp_mult_expr_left_10;
        PyObject *tmp_mult_expr_right_10;
        PyObject *tmp_floordiv_expr_left_3;
        PyObject *tmp_floordiv_expr_right_3;
        PyObject *tmp_floordiv_expr_left_4;
        PyObject *tmp_floordiv_expr_right_4;
        tmp_ass_subvalue_8 = const_int_pos_1;
        CHECK_OBJECT(var_matrix);
        tmp_expression_value_12 = var_matrix;
        CHECK_OBJECT(var_row);
        tmp_subscript_value_12 = var_row;
        tmp_ass_subscribed_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_12);
        if (tmp_ass_subscribed_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 155;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
        tmp_add_expr_left_15 = mod_consts[44];
        if (var_r == NULL) {
            Py_DECREF(tmp_ass_subscribed_8);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 155;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }

        tmp_floordiv_expr_left_3 = var_r;
        tmp_floordiv_expr_right_3 = mod_consts[45];
        tmp_mult_expr_left_10 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_3, tmp_floordiv_expr_right_3);
        if (tmp_mult_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_8);

            exception_lineno = 155;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
        tmp_mult_expr_right_10 = mod_consts[45];
        tmp_add_expr_left_16 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_10, tmp_mult_expr_right_10);
        Py_DECREF(tmp_mult_expr_left_10);
        if (tmp_add_expr_left_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_8);

            exception_lineno = 155;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
        if (var_c == NULL) {
            Py_DECREF(tmp_ass_subscribed_8);
            Py_DECREF(tmp_add_expr_left_16);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[46]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 155;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }

        tmp_floordiv_expr_left_4 = var_c;
        tmp_floordiv_expr_right_4 = mod_consts[45];
        tmp_add_expr_right_16 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_4, tmp_floordiv_expr_right_4);
        if (tmp_add_expr_right_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_8);
            Py_DECREF(tmp_add_expr_left_16);

            exception_lineno = 155;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
        tmp_mult_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_16, tmp_add_expr_right_16);
        Py_DECREF(tmp_add_expr_left_16);
        Py_DECREF(tmp_add_expr_right_16);
        if (tmp_mult_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_8);

            exception_lineno = 155;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
        tmp_mult_expr_right_9 = mod_consts[41];
        tmp_add_expr_right_15 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_9, tmp_mult_expr_right_9);
        Py_DECREF(tmp_mult_expr_left_9);
        if (tmp_add_expr_right_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_8);

            exception_lineno = 155;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
        tmp_add_expr_left_14 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_15, tmp_add_expr_right_15);
        Py_DECREF(tmp_add_expr_right_15);
        if (tmp_add_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_8);

            exception_lineno = 155;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(var_n);
        tmp_add_expr_right_14 = var_n;
        tmp_ass_subscript_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_14, tmp_add_expr_right_14);
        Py_DECREF(tmp_add_expr_left_14);
        if (tmp_ass_subscript_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subscribed_8);

            exception_lineno = 155;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
        Py_DECREF(tmp_ass_subscribed_8);
        Py_DECREF(tmp_ass_subscript_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 155;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 150;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_10;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_lineno_7 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_7 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_9;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    branch_end_1:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 141;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_9;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_lineno_8 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_8 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_8;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 140;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_lineno_9 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_9 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover,
        type_description_1,
        par_board,
        var_R,
        var_C,
        var_N,
        var_cell_index,
        var_row_index,
        var_matrix,
        var_r,
        var_c,
        var_n,
        var_row
    );


    // Release cached frame if used for exception.
    if (frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover == cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover);
        cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover = NULL;
    }

    assertFrameObject(frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    CHECK_OBJECT(var_matrix);
    tmp_return_value = var_matrix;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_R);
    Py_DECREF(var_R);
    var_R = NULL;
    CHECK_OBJECT(var_C);
    Py_DECREF(var_C);
    var_C = NULL;
    CHECK_OBJECT(var_N);
    Py_DECREF(var_N);
    var_N = NULL;
    Py_XDECREF(var_cell_index);
    var_cell_index = NULL;
    CHECK_OBJECT(var_row_index);
    Py_DECREF(var_row_index);
    var_row_index = NULL;
    CHECK_OBJECT(var_matrix);
    Py_DECREF(var_matrix);
    var_matrix = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_10 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_10 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_R);
    var_R = NULL;
    Py_XDECREF(var_C);
    var_C = NULL;
    Py_XDECREF(var_N);
    var_N = NULL;
    Py_XDECREF(var_cell_index);
    var_cell_index = NULL;
    Py_XDECREF(var_row_index);
    var_row_index = NULL;
    Py_XDECREF(var_matrix);
    var_matrix = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_board);
    Py_DECREF(par_board);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_board);
    Py_DECREF(par_board);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_r = python_pars[0];
    PyObject *par_c = python_pars[1];
    PyObject *par_n = python_pars[2];
    struct Nuitka_FrameObject *frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index)) {
        Py_XDECREF(cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index = MAKE_FUNCTION_FRAME(tstate, code_objects_5c72fd4321a6821f836294db227fcccb, module_dlx_solver, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index->m_type_description == NULL);
    frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index = cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index);
    assert(Py_REFCNT(frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        CHECK_OBJECT(par_r);
        tmp_mult_expr_left_1 = par_r;
        tmp_mult_expr_right_1 = mod_consts[42];
        tmp_add_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_c);
        tmp_mult_expr_left_2 = par_c;
        tmp_mult_expr_right_2 = mod_consts[41];
        tmp_add_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_add_expr_right_1 = par_n;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index,
        type_description_1,
        par_r,
        par_c,
        par_n
    );


    // Release cached frame if used for exception.
    if (frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index == cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index);
        cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index = NULL;
    }

    assertFrameObject(frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_r = python_pars[0];
    PyObject *par_c = python_pars[1];
    PyObject *par_n = python_pars[2];
    struct Nuitka_FrameObject *frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index)) {
        Py_XDECREF(cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index = MAKE_FUNCTION_FRAME(tstate, code_objects_6ccf224f5cfa0d801a3b4c692f156720, module_dlx_solver, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index->m_type_description == NULL);
    frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index = cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index);
    assert(Py_REFCNT(frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        CHECK_OBJECT(par_r);
        tmp_mult_expr_left_1 = par_r;
        tmp_mult_expr_right_1 = mod_consts[42];
        tmp_add_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 136;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_c);
        tmp_mult_expr_left_2 = par_c;
        tmp_mult_expr_right_2 = mod_consts[41];
        tmp_add_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 136;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 136;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_add_expr_right_1 = par_n;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 136;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index,
        type_description_1,
        par_r,
        par_c,
        par_n
    );


    // Release cached frame if used for exception.
    if (frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index == cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index);
        cache_frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index = NULL;
    }

    assertFrameObject(frame_frame_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_dlx_solver$$$function__11_solve_sudoku(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_board = python_pars[0];
    PyObject *var_matrix = NULL;
    PyObject *var_solver = NULL;
    PyObject *var_solution = NULL;
    PyObject *var_result = NULL;
    PyObject *var_row = NULL;
    PyObject *var_r = NULL;
    PyObject *var_c = NULL;
    PyObject *var_n = NULL;
    PyObject *outline_0_var__ = NULL;
    PyObject *outline_1_var__ = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp$$36$listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp$$36$listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp$$36$listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_frame_dlx_solver$$$function__11_solve_sudoku;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_frame_dlx_solver$$$function__11_solve_sudoku = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_dlx_solver$$$function__11_solve_sudoku)) {
        Py_XDECREF(cache_frame_frame_dlx_solver$$$function__11_solve_sudoku);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_dlx_solver$$$function__11_solve_sudoku == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_dlx_solver$$$function__11_solve_sudoku = MAKE_FUNCTION_FRAME(tstate, code_objects_118e8e6ae2bd1bf8bd847f93db839e45, module_dlx_solver, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_dlx_solver$$$function__11_solve_sudoku->m_type_description == NULL);
    frame_frame_dlx_solver$$$function__11_solve_sudoku = cache_frame_frame_dlx_solver$$$function__11_solve_sudoku;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_dlx_solver$$$function__11_solve_sudoku);
    assert(Py_REFCNT(frame_frame_dlx_solver$$$function__11_solve_sudoku) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = module_var_accessor_dlx_solver$sudoku_to_exact_cover(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[48]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 159;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_board);
        tmp_args_element_value_1 = par_board;
        frame_frame_dlx_solver$$$function__11_solve_sudoku->m_frame.f_lineno = 159;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 159;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_matrix == NULL);
        var_matrix = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = module_var_accessor_dlx_solver$DLXSolver(tstate);
        if (unlikely(tmp_called_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[49]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_matrix);
        tmp_args_element_value_2 = var_matrix;
        frame_frame_dlx_solver$$$function__11_solve_sudoku->m_frame.f_lineno = 160;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_solver == NULL);
        var_solver = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_solver);
        tmp_called_instance_1 = var_solver;
        frame_frame_dlx_solver$$$function__11_solve_sudoku->m_frame.f_lineno = 161;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[50]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 161;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_solution == NULL);
        var_solution = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_solution);
        tmp_operand_value_1 = var_solution;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 163;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = mod_consts[40];
            tmp_assign_source_5 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
            assert(!(tmp_assign_source_5 == NULL));
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = MAKE_LIST_EMPTY(tstate, 0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_6;
        }
        // Tried code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_7 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
            if (tmp_assign_source_7 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                    type_description_1 = "ooooooooo";
                    exception_lineno = 166;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_8 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var__;
                outline_0_var__ = tmp_assign_source_8;
                Py_INCREF(outline_0_var__);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_iter_arg_2;
                tmp_iter_arg_2 = mod_consts[40];
                tmp_assign_source_9 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
                assert(!(tmp_assign_source_9 == NULL));
                {
                    PyObject *old = tmp_listcomp$$36$listcomp_1__$0;
                    tmp_listcomp$$36$listcomp_1__$0 = tmp_assign_source_9;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_10;
                tmp_assign_source_10 = MAKE_LIST_EMPTY(tstate, 0);
                {
                    PyObject *old = tmp_listcomp$$36$listcomp_1__contraction;
                    tmp_listcomp$$36$listcomp_1__contraction = tmp_assign_source_10;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            // Tried code:
            loop_start_2:;
            {
                PyObject *tmp_next_source_2;
                PyObject *tmp_assign_source_11;
                CHECK_OBJECT(tmp_listcomp$$36$listcomp_1__$0);
                tmp_next_source_2 = tmp_listcomp$$36$listcomp_1__$0;
                tmp_assign_source_11 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
                if (tmp_assign_source_11 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                        goto loop_end_2;
                    } else {

                        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                        type_description_1 = "ooooooooo";
                        exception_lineno = 166;
                        goto try_except_handler_5;
                    }
                }

                {
                    PyObject *old = tmp_listcomp$$36$listcomp_1__iter_value_0;
                    tmp_listcomp$$36$listcomp_1__iter_value_0 = tmp_assign_source_11;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_12;
                CHECK_OBJECT(tmp_listcomp$$36$listcomp_1__iter_value_0);
                tmp_assign_source_12 = tmp_listcomp$$36$listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_1_var__;
                    outline_1_var__ = tmp_assign_source_12;
                    Py_INCREF(outline_1_var__);
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_append_list_2;
                PyObject *tmp_append_value_2;
                CHECK_OBJECT(tmp_listcomp$$36$listcomp_1__contraction);
                tmp_append_list_2 = tmp_listcomp$$36$listcomp_1__contraction;
                tmp_append_value_2 = const_int_0;
                tmp_result = LIST_APPEND0(tmp_append_list_2, tmp_append_value_2);
                if (tmp_result == false) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 166;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_5;
                }
            }
            if (CONSIDER_THREADING(tstate) == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 166;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            goto loop_start_2;
            loop_end_2:;
            CHECK_OBJECT(tmp_listcomp$$36$listcomp_1__contraction);
            tmp_append_value_1 = tmp_listcomp$$36$listcomp_1__contraction;
            Py_INCREF(tmp_append_value_1);
            goto try_return_handler_5;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_5:;
            CHECK_OBJECT(tmp_listcomp$$36$listcomp_1__$0);
            Py_DECREF(tmp_listcomp$$36$listcomp_1__$0);
            tmp_listcomp$$36$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp$$36$listcomp_1__contraction);
            Py_DECREF(tmp_listcomp$$36$listcomp_1__contraction);
            tmp_listcomp$$36$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_listcomp$$36$listcomp_1__iter_value_0);
            tmp_listcomp$$36$listcomp_1__iter_value_0 = NULL;
            goto try_return_handler_4;
            // Exception handler code:
            try_except_handler_5:;
            exception_keeper_lineno_1 = exception_lineno;
            exception_lineno = 0;
            exception_keeper_name_1 = exception_state;
            INIT_ERROR_OCCURRED_STATE(&exception_state);

            CHECK_OBJECT(tmp_listcomp$$36$listcomp_1__$0);
            Py_DECREF(tmp_listcomp$$36$listcomp_1__$0);
            tmp_listcomp$$36$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp$$36$listcomp_1__contraction);
            Py_DECREF(tmp_listcomp$$36$listcomp_1__contraction);
            tmp_listcomp$$36$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_listcomp$$36$listcomp_1__iter_value_0);
            tmp_listcomp$$36$listcomp_1__iter_value_0 = NULL;
            // Re-raise.
            exception_state = exception_keeper_name_1;
            exception_lineno = exception_keeper_lineno_1;

            goto try_except_handler_4;
            // End of try:
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_4:;
            Py_XDECREF(outline_1_var__);
            outline_1_var__ = NULL;
            goto outline_result_2;
            // Exception handler code:
            try_except_handler_4:;
            exception_keeper_lineno_2 = exception_lineno;
            exception_lineno = 0;
            exception_keeper_name_2 = exception_state;
            INIT_ERROR_OCCURRED_STATE(&exception_state);

            Py_XDECREF(outline_1_var__);
            outline_1_var__ = NULL;
            // Re-raise.
            exception_state = exception_keeper_name_2;
            exception_lineno = exception_keeper_lineno_2;

            goto outline_exception_2;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_2:;
            exception_lineno = 166;
            goto try_except_handler_3;
            outline_result_2:;
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 166;
                type_description_1 = "ooooooooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 166;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_4 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_4);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_lineno_3 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_3 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var__);
        outline_0_var__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_lineno_4 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_4 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(outline_0_var__);
        outline_0_var__ = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 166;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_result == NULL);
        var_result = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(var_solution);
        tmp_iter_arg_3 = var_solution;
        tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 167;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_13;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_3 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_14 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooo";
                exception_lineno = 167;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_15 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_row;
            var_row = tmp_assign_source_15;
            Py_INCREF(var_row);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        CHECK_OBJECT(var_row);
        tmp_floordiv_expr_left_1 = var_row;
        tmp_floordiv_expr_right_1 = mod_consts[42];
        tmp_assign_source_16 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 168;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_floordiv_expr_left_2;
        PyObject *tmp_floordiv_expr_right_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        CHECK_OBJECT(var_row);
        tmp_mod_expr_left_1 = var_row;
        tmp_mod_expr_right_1 = mod_consts[42];
        tmp_floordiv_expr_left_2 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_floordiv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 169;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_2 = mod_consts[41];
        tmp_assign_source_17 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
        Py_DECREF(tmp_floordiv_expr_left_2);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 169;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        CHECK_OBJECT(var_row);
        tmp_mod_expr_left_2 = var_row;
        tmp_mod_expr_right_2 = mod_consts[41];
        tmp_assign_source_18 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 170;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_n;
            var_n = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_n);
        tmp_add_expr_left_1 = var_n;
        tmp_add_expr_right_1 = const_int_pos_1;
        tmp_ass_subvalue_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 171;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_result);
        tmp_expression_value_1 = var_result;
        CHECK_OBJECT(var_r);
        tmp_subscript_value_1 = var_r;
        tmp_ass_subscribed_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 171;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_c);
        tmp_ass_subscript_1 = var_c;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 171;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 167;
        type_description_1 = "ooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_dlx_solver$$$function__11_solve_sudoku, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_dlx_solver$$$function__11_solve_sudoku->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_dlx_solver$$$function__11_solve_sudoku, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_dlx_solver$$$function__11_solve_sudoku,
        type_description_1,
        par_board,
        var_matrix,
        var_solver,
        var_solution,
        var_result,
        var_row,
        var_r,
        var_c,
        var_n
    );


    // Release cached frame if used for exception.
    if (frame_frame_dlx_solver$$$function__11_solve_sudoku == cache_frame_frame_dlx_solver$$$function__11_solve_sudoku) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_dlx_solver$$$function__11_solve_sudoku);
        cache_frame_frame_dlx_solver$$$function__11_solve_sudoku = NULL;
    }

    assertFrameObject(frame_frame_dlx_solver$$$function__11_solve_sudoku);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_matrix);
    Py_DECREF(var_matrix);
    var_matrix = NULL;
    CHECK_OBJECT(var_solver);
    Py_DECREF(var_solver);
    var_solver = NULL;
    CHECK_OBJECT(var_solution);
    Py_DECREF(var_solution);
    var_solution = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_matrix);
    var_matrix = NULL;
    Py_XDECREF(var_solver);
    var_solver = NULL;
    Py_XDECREF(var_solution);
    var_solution = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_board);
    Py_DECREF(par_board);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_board);
    Py_DECREF(par_board);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_dlx_solver$$$function__10_sudoku_to_exact_cover(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dlx_solver$$$function__10_sudoku_to_exact_cover,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2d7b44dcf46aedde1a05937fbddaa787,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dlx_solver,
        mod_consts[47],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        mod_consts[35],
#endif
        code_objects_5c72fd4321a6821f836294db227fcccb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dlx_solver,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        mod_consts[37],
#endif
        code_objects_6ccf224f5cfa0d801a3b4c692f156720,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dlx_solver,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dlx_solver$$$function__11_solve_sudoku(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dlx_solver$$$function__11_solve_sudoku,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_118e8e6ae2bd1bf8bd847f93db839e45,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dlx_solver,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dlx_solver$$$function__1___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dlx_solver$$$function__1___init__,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[59],
#endif
        code_objects_a1f7e452bf478d0305f45a9fe59bcbd9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dlx_solver,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dlx_solver$$$function__2___init__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dlx_solver$$$function__2___init__,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[65],
#endif
        code_objects_ee51064bb7896fe14eb189ce958d2fc7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dlx_solver,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dlx_solver$$$function__3___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dlx_solver$$$function__3___init__,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[67],
#endif
        code_objects_16b9f90f650e2563f8e4d2430eb79ab2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dlx_solver,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dlx_solver$$$function__4__build_linked_matrix(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dlx_solver$$$function__4__build_linked_matrix,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[68],
#endif
        code_objects_24c71192453f9b1f4d14d28ed49fd6a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dlx_solver,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dlx_solver$$$function__5__cover(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dlx_solver$$$function__5__cover,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[69],
#endif
        code_objects_529cce9fd2fee5843e1c3aca5fe91651,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dlx_solver,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dlx_solver$$$function__6__uncover(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dlx_solver$$$function__6__uncover,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[70],
#endif
        code_objects_f09e6239cbdee60e53e82b5dc905fa5f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dlx_solver,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dlx_solver$$$function__7__search(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dlx_solver$$$function__7__search,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[71],
#endif
        code_objects_27806ae690a3e64d19aac73f408c94f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dlx_solver,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dlx_solver$$$function__8__select_column(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dlx_solver$$$function__8__select_column,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[72],
#endif
        code_objects_72561256d1f79b238c75ec50e5a9e28a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dlx_solver,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dlx_solver$$$function__9_solve(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dlx_solver$$$function__9_solve,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[73],
#endif
        code_objects_b4ecb34738dea556cb922e23c81d54bc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dlx_solver,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_dlx_solver[] = {
    impl_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__1_cell_index,
    impl_dlx_solver$$$function__10_sudoku_to_exact_cover$$$function__2_row_index,
    impl_dlx_solver$$$function__1___init__,
    impl_dlx_solver$$$function__2___init__,
    impl_dlx_solver$$$function__3___init__,
    impl_dlx_solver$$$function__4__build_linked_matrix,
    impl_dlx_solver$$$function__5__cover,
    impl_dlx_solver$$$function__6__uncover,
    impl_dlx_solver$$$function__7__search,
    impl_dlx_solver$$$function__8__select_column,
    impl_dlx_solver$$$function__9_solve,
    impl_dlx_solver$$$function__10_sudoku_to_exact_cover,
    impl_dlx_solver$$$function__11_solve_sudoku,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    return Nuitka_Function_GetFunctionState(function, function_table_dlx_solver);
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;
    PyObject *closure;
    PyObject *annotations;
    PyObject *func_dict;

    if (!PyArg_ParseTuple(args, "OOOOOOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, &closure, &annotations, &func_dict, NULL)) {
        return NULL;
    }

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_dlx_solver,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        annotations,
        func_dict,
        function_table_dlx_solver,
        sizeof(function_table_dlx_solver) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Actual name might be different when loaded as a package.
#if _NUITKA_MODULE_MODE && 0
static char const *module_full_name = "dlx_solver";
#endif

// Internal entry point for module code.
PyObject *modulecode_dlx_solver(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("dlx_solver");

    // Store the module for future use.
    module_dlx_solver = module;

    moduledict_dlx_solver = MODULE_DICT(module_dlx_solver);

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if _NUITKA_MODULE_MODE && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.
#if PYTHON_VERSION > 0x350 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_ALLOCATORS)
        initNuitkaAllocators();
#endif
        // Initialize the constant values used.
        _initBuiltinModule();

        PyObject *real_module_name = PyObject_GetAttrString(module, "__name__");
        CHECK_OBJECT(real_module_name);
        module_full_name = strdup(Nuitka_String_AsString(real_module_name));

        createGlobalConstants(tstate, real_module_name);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("dlx_solver: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("dlx_solver: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("dlx_solver: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "dlx_solver" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initdlx_solver\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dlx_solver, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_dlx_solver,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_dlx_solver,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[88]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dlx_solver, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_dlx_solver,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dlx_solver, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_dlx_solver,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dlx_solver, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_dlx_solver,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_dlx_solver);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_dlx_solver, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_dlx_solver, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_dlx_solver, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_dlx_solver, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_dlx_solver);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

        // Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

#if _NUITKA_MODULE_MODE && 0 && 0 >= 0
        // Set our loader object in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain_loader, module_loader);
#endif

        UPDATE_STRING_DICT1(moduledict_dlx_solver, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    struct Nuitka_CellObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    struct Nuitka_FrameObject *frame_frame_dlx_solver;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_dlx_solver$$$class__1_Node_3 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;
    PyObject *locals_dlx_solver$$$class__2_ColumnNode_8 = NULL;
    struct Nuitka_FrameObject *frame_frame_dlx_solver$$$class__2_ColumnNode_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_dlx_solver$$$class__3_DLXSolver_14 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_2);
    }
    frame_frame_dlx_solver = MAKE_MODULE_FRAME(code_objects_5846d89cac8cb6a12d9abc6691f40aa0, module_dlx_solver);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_dlx_solver);
    assert(Py_REFCNT(frame_frame_dlx_solver) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_dlx_solver$__spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[53], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = module_var_accessor_dlx_solver$__spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[54], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_dlx_solver$$$class__1_Node_3 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[56];
        tmp_result = DICT_SET_ITEM(locals_dlx_solver$$$class__1_Node_3, mod_consts[57], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[17];
        tmp_result = DICT_SET_ITEM(locals_dlx_solver$$$class__1_Node_3, mod_consts[58], tmp_dictset_value);
        assert(!(tmp_result == false));


        tmp_dictset_value = MAKE_FUNCTION_dlx_solver$$$function__1___init__(tstate);

        tmp_result = DICT_SET_ITEM(locals_dlx_solver$$$class__1_Node_3, mod_consts[7], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[17];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_dlx_solver$$$class__1_Node_3;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_frame_dlx_solver->m_frame.f_lineno = 3;
            tmp_assign_source_7 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 3;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_7;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_6 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_6);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_dlx_solver$$$class__1_Node_3);
        locals_dlx_solver$$$class__1_Node_3 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_lineno_1 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_1 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_dlx_solver$$$class__1_Node_3);
        locals_dlx_solver$$$class__1_Node_3 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_lineno_2 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_2 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 3;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_6);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = module_var_accessor_dlx_solver$Node(tstate);
        assert(!(tmp_tuple_element_2 == NULL));
        tmp_assign_source_8 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_assign_source_8, 0, tmp_tuple_element_2);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_direct_call_arg1_1;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_direct_call_arg1_1 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_direct_call_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
            tmp_assign_source_9 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_1 = tmp_class_creation_2__bases;
        tmp_subscript_value_1 = const_int_0;
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_1 = tmp_class_creation_2__bases;
        tmp_assign_source_11 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_11;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_2 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[60]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_2;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_3 = tmp_class_creation_2__metaclass;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[60]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        tmp_tuple_element_3 = mod_consts[13];
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_3 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
        frame_frame_dlx_solver->m_frame.f_lineno = 8;
        tmp_assign_source_12 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_2);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_12;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_4 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[61]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_default_value_1;
        tmp_mod_expr_left_1 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_5 = tmp_class_creation_2__metaclass;
        tmp_name_value_1 = mod_consts[63];
        tmp_default_value_1 = mod_consts[64];
        tmp_tuple_element_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_1, tmp_default_value_1);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_2 = tmp_class_creation_2__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[63]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 8;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        frame_frame_dlx_solver->m_frame.f_lineno = 8;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_state.exception_type = tmp_raise_type_1;
        exception_lineno = 8;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);

        goto try_except_handler_4;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_13;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_14;
        outline_1_var___class__ = Nuitka_Cell_NewEmpty();
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_dlx_solver$$$class__2_ColumnNode_8 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[56];
        tmp_res = PyObject_SetItem(locals_dlx_solver$$$class__2_ColumnNode_8, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[13];
        tmp_res = PyObject_SetItem(locals_dlx_solver$$$class__2_ColumnNode_8, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto try_except_handler_6;
        }
        frame_frame_dlx_solver$$$class__2_ColumnNode_2 = MAKE_CLASS_FRAME(tstate, code_objects_b8c0d8ef21243b9442223c3d582419bb, module_dlx_solver, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_frame_dlx_solver$$$class__2_ColumnNode_2);
        assert(Py_REFCNT(frame_frame_dlx_solver$$$class__2_ColumnNode_2) == 2);

        // Framed code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_dlx_solver$$$function__2___init__(tstate, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_dlx_solver$$$class__2_ColumnNode_8, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 9;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        {
            PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_frame_dlx_solver$$$class__2_ColumnNode_2, exception_lineno);
                SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
            } else if (exception_tb->tb_frame != &frame_frame_dlx_solver$$$class__2_ColumnNode_2->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_dlx_solver$$$class__2_ColumnNode_2, exception_lineno);
                SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
            }
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_frame_dlx_solver$$$class__2_ColumnNode_2,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_frame_dlx_solver$$$class__2_ColumnNode_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 8;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_dlx_solver$$$class__2_ColumnNode_8, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_3;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_3 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_5 = mod_consts[13];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_5 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_dlx_solver$$$class__2_ColumnNode_8;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
            frame_frame_dlx_solver->m_frame.f_lineno = 8;
            tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 8;

                goto try_except_handler_6;
            }
            assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
            Nuitka_Cell_SET(outline_1_var___class__, tmp_assign_source_15);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
        tmp_assign_source_14 = Nuitka_Cell_GET(outline_1_var___class__);
        Py_INCREF(tmp_assign_source_14);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_dlx_solver$$$class__2_ColumnNode_8);
        locals_dlx_solver$$$class__2_ColumnNode_8 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_lineno_4 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_4 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_dlx_solver$$$class__2_ColumnNode_8);
        locals_dlx_solver$$$class__2_ColumnNode_8 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_lineno_5 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_5 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 8;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_14);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_dlx_solver$$$class__3_DLXSolver_14 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[56];
        tmp_result = DICT_SET_ITEM(locals_dlx_solver$$$class__3_DLXSolver_14, mod_consts[57], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[49];
        tmp_result = DICT_SET_ITEM(locals_dlx_solver$$$class__3_DLXSolver_14, mod_consts[58], tmp_dictset_value);
        assert(!(tmp_result == false));


        tmp_dictset_value = MAKE_FUNCTION_dlx_solver$$$function__3___init__(tstate);

        tmp_result = DICT_SET_ITEM(locals_dlx_solver$$$class__3_DLXSolver_14, mod_consts[7], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));


        tmp_dictset_value = MAKE_FUNCTION_dlx_solver$$$function__4__build_linked_matrix(tstate);

        tmp_result = DICT_SET_ITEM(locals_dlx_solver$$$class__3_DLXSolver_14, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));


        tmp_dictset_value = MAKE_FUNCTION_dlx_solver$$$function__5__cover(tstate);

        tmp_result = DICT_SET_ITEM(locals_dlx_solver$$$class__3_DLXSolver_14, mod_consts[22], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));


        tmp_dictset_value = MAKE_FUNCTION_dlx_solver$$$function__6__uncover(tstate);

        tmp_result = DICT_SET_ITEM(locals_dlx_solver$$$class__3_DLXSolver_14, mod_consts[27], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));


        tmp_dictset_value = MAKE_FUNCTION_dlx_solver$$$function__7__search(tstate);

        tmp_result = DICT_SET_ITEM(locals_dlx_solver$$$class__3_DLXSolver_14, mod_consts[26], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));


        tmp_dictset_value = MAKE_FUNCTION_dlx_solver$$$function__8__select_column(tstate);

        tmp_result = DICT_SET_ITEM(locals_dlx_solver$$$class__3_DLXSolver_14, mod_consts[21], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));


        tmp_dictset_value = MAKE_FUNCTION_dlx_solver$$$function__9_solve(tstate);

        tmp_result = DICT_SET_ITEM(locals_dlx_solver$$$class__3_DLXSolver_14, mod_consts[50], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_4;
            tmp_called_value_4 = (PyObject *)&PyType_Type;
            tmp_tuple_element_6 = mod_consts[49];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_dlx_solver$$$class__3_DLXSolver_14;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_3__class_decl_dict;
            frame_frame_dlx_solver->m_frame.f_lineno = 14;
            tmp_assign_source_19 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 14;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_19;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_18 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_18);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_dlx_solver$$$class__3_DLXSolver_14);
        locals_dlx_solver$$$class__3_DLXSolver_14 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_lineno_7 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_7 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_dlx_solver$$$class__3_DLXSolver_14);
        locals_dlx_solver$$$class__3_DLXSolver_14 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_lineno_8 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_8 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 14;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_18);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_lineno_9 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_9 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_dlx_solver, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_dlx_solver->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_dlx_solver, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_dlx_solver);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_dlx_solver$$$function__10_sudoku_to_exact_cover(tstate);

        UPDATE_STRING_DICT1(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_dlx_solver$$$function__11_solve_sudoku(tstate);

        UPDATE_STRING_DICT1(moduledict_dlx_solver, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_21);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("dlx_solver", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "dlx_solver" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_dlx_solver);
    return module_dlx_solver;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dlx_solver, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("dlx_solver", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
