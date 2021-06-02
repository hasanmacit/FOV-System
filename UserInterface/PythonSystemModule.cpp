arat

PyObject * systemSetShadowLevel(PyObject * poSelf, PyObject * poArgs)

altına ekle

#ifdef ENABLE_FOV_OPTION
PyObject* systemSetExtendedFOV(PyObject* poSelf, PyObject* poArgs)
{
	int iFlag;
	if (!PyTuple_GetInteger(poArgs, 0, &iFlag))
		return Py_BuildException();
	CPythonSystem::Instance().SetExtendedFOV(iFlag);
	return Py_BuildNone();
}

PyObject* systemIsExtendedFOV(PyObject* poSelf, PyObject* poArgs)
{
	return Py_BuildValue("i", CPythonSystem::Instance().IsExtendedFOV());
}
#endif

arat

{ "IsShowSalesText", systemIsShowSalesText, METH_VARARGS },

altına ekle

#ifdef ENABLE_FOV_OPTION
		{ "SetExtendedFOV",	systemSetExtendedFOV, METH_VARARGS },
		{ "IsExtendedFOV", systemIsExtendedFOV, METH_VARARGS },
#endif