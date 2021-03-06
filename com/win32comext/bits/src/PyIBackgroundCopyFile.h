// This file declares the IBackgroundCopyFile Interface for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

class PyIBackgroundCopyFile : public PyIUnknown {
   public:
    MAKE_PYCOM_CTOR(PyIBackgroundCopyFile);
    static IBackgroundCopyFile *GetI(PyObject *self);
    static PyComTypeObject type;

    // The Python methods
    static PyObject *GetRemoteName(PyObject *self, PyObject *args);
    static PyObject *GetLocalName(PyObject *self, PyObject *args);
    static PyObject *GetProgress(PyObject *self, PyObject *args);

   protected:
    PyIBackgroundCopyFile(IUnknown *pdisp);
    ~PyIBackgroundCopyFile();
};
