/*
    Generated by genstrings.py

    Edit that - do not edit this file
*/

static struct _apsw_string_table
{
    PyObject *Begin;
    PyObject *BestIndex;
    PyObject *BestIndexObject;
    PyObject *Commit;
    PyObject *Connect;
    PyObject *Create;
    PyObject *ShadowName;
} apst = {0};

static void
fini_apsw_strings(void)
{
    Py_CLEAR(apst.Begin);
    Py_CLEAR(apst.BestIndex);
    Py_CLEAR(apst.BestIndexObject);
    Py_CLEAR(apst.Commit);
    Py_CLEAR(apst.Connect);
    Py_CLEAR(apst.Create);
    Py_CLEAR(apst.ShadowName);
}

/* returns zero on success, -1 on error */
static int
init_apsw_strings()
{
    if ((0 == (apst.Begin = PyUnicode_FromString("Begin"))) || (0 == (apst.BestIndex = PyUnicode_FromString("BestIndex"))) || (0 == (apst.BestIndexObject = PyUnicode_FromString("BestIndexObject"))) || (0 == (apst.Commit = PyUnicode_FromString("Commit"))) || (0 == (apst.Connect = PyUnicode_FromString("Connect"))) || (0 == (apst.Create = PyUnicode_FromString("Create"))) || (0 == (apst.ShadowName = PyUnicode_FromString("ShadowName"))))
    {
        fini_apsw_strings();
        return -1;
    }
    return 0;
}