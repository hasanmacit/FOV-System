arat

void CPythonApplication::RenderGame()

içinde bul

float fFarClip=m_pyBackground.GetFarClip();

altındaki 

m_pyGraphic.SetPerspective

komple değiştir bunu

#ifdef ENABLE_FOV_OPTION
		if (CPythonSystem::instance().IsExtendedFOV())
			m_pyGraphic.SetPerspective(CAMERA_PERSPECTIVE * 2.5, fAspect, 100.0, fFarClip);
		else
			m_pyGraphic.SetPerspective(CAMERA_PERSPECTIVE, fAspect, 100.0, fFarClip);
#else
		m_pyGraphic.SetPerspective(CAMERA_PERSPECTIVE, fAspect, 100.0, fFarClip);
#endif

yine arat

float fFarClip=m_pyBackground.GetFarClip();

altındaki 

m_pyGraphic.SetPerspective

komple değiş

#ifdef ENABLE_FOV_OPTION
	if (CPythonSystem::instance().IsExtendedFOV())
		m_pyGraphic.SetPerspective(CAMERA_PERSPECTIVE * 2.5, fAspect, 100.0, fFarClip);
	else
		m_pyGraphic.SetPerspective(CAMERA_PERSPECTIVE, fAspect, 100.0, fFarClip);
#else
	m_pyGraphic.SetPerspective(CAMERA_PERSPECTIVE, fAspect, 100.0, fFarClip);
#endif

yine arat

float fFarClip = CPythonBackground::Instance().GetFarClip();

altında

s.SetPerspective(30.0f, fAspect, 100.0f, fFarClip);

komple değiş

#ifdef ENABLE_FOV_OPTION
		if (CPythonSystem::instance().IsExtendedFOV())
			s.SetPerspective(CAMERA_PERSPECTIVE * 2.5, fAspect, 100.0f, fFarClip);
		else
			s.SetPerspective(CAMERA_PERSPECTIVE, fAspect, 100.0f, fFarClip);
#else
		s.SetPerspective(30.0f, fAspect, 100.0f, fFarClip);
#endif