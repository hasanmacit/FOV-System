arat

m_Config.bShowSalesText

altına ekle

#ifdef ENABLE_FOV_OPTION
	m_Config.bExtendedFOV = false;
#endif

arat

bool CPythonSystem::IsAutoTiling()

altına ekle

#ifdef ENABLE_FOV_OPTION
bool CPythonSystem::IsExtendedFOV()
{
	return m_Config.bExtendedFOV;
}
void CPythonSystem::SetExtendedFOV(int iFlag)
{
	m_Config.bExtendedFOV = iFlag == 1 ? true : false;
}
#endif

arat

		else if (!stricmp(command, "SHOW_SALESTEXT"))
			m_Config.bShowSalesText = atoi(value) == 1 ? true : false;

altına ekle

#ifdef ENABLE_FOV_OPTION
		else if (!stricmp(command, "EXTENDED_FOV"))
			m_Config.bExtendedFOV = atoi(value) == 1 ? true : false;
#endif

arat

fprintf(fp, "SHOW_SALESTEXT			%d\n", m_Config.bShowSalesText);

altına ekle

#ifdef ENABLE_FOV_OPTION
	fprintf(fp, "EXTENDED_FOV				%d\n", m_Config.bExtendedFOV);
#endif

