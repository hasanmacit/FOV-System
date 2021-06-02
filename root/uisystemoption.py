arat

self.__Load()

altına ekle

if app.ENABLE_FOV_OPTION:
			self.RefreshFOVOption()

arat

self.ctrlShadowQuality = 0

altına ekle

if app.ENABLE_FOV_OPTION:
			self.fovButtonList = []

arat

self.tilingApplyButton=GetObject("tiling_apply")

altna ekle

if app.ENABLE_FOV_OPTION:
				self.fovButtonList.append(GetObject("fov_on"))
				self.fovButtonList.append(GetObject("fov_off"))

arat

self.ctrlSoundVolume.SetEvent(ui.__mem_func__(self.OnChangeSoundVolume))

altına ekle

		if app.ENABLE_FOV_OPTION:
			self.__ClickRadioButton(self.fovButtonList, systemSetting.IsExtendedFOV())

arat

self.__ClickRadioButton(self.cameraModeButtonList, constInfo.GET_CAMERA_MAX_DISTANCE_INDEX())

altına ekle

		if app.ENABLE_FOV_OPTION:
			self.fovButtonList[0].SAFE_SetEvent(self.__OnClickFOVButton, 1) # on
			self.fovButtonList[1].SAFE_SetEvent(self.__OnClickFOVButton, 0) # off

arat

def __OnChangeMusic(self, fileName):

altına ekle

	if app.ENABLE_FOV_OPTION:
		def __OnClickFOVButton(self, flag):
			self.__ClickRadioButton(self.fovButtonList, flag)
			systemSetting.SetExtendedFOV(flag)
			self.RefreshFOVOption()

		def RefreshFOVOption(self):
			if systemSetting.IsExtendedFOV():
				self.fovButtonList[1].SetUp()
				self.fovButtonList[0].Down()
			else:
				self.fovButtonList[1].Down()
				self.fovButtonList[0].SetUp()

