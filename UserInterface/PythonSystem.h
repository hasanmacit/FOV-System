arat

bool bShowSalesText;

altına ekle

#ifdef ENABLE_FOV_OPTION
		bool bExtendedFOV;
#endif

arat

void SetShowSalesTextFlag(int iFlag);

altına ekle

#ifdef ENABLE_FOV_OPTION
	bool IsExtendedFOV();
	void SetExtendedFOV(int iFlag);
#endif