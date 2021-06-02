uygun yere ekle

				## ENABLE_FOV_OPTION
				{
					"name" : "fov_option",
					"type" : "text",

					"x" : 40 + TEXT_TEMPORARY_X,
					"y" : 210 + 2,

					"text" : uiScriptLocale.FOV_OPTION,
				},

				{
					"name" : "fov_on",
					"type" : "radio_button",

					"x" : 110,
					"y" : 210,

					"text" : uiScriptLocale.FOV_OPTION_ON,

					"default_image" : ROOT_PATH + "small_Button_01.sub",
					"over_image" : ROOT_PATH + "small_Button_02.sub",
					"down_image" : ROOT_PATH + "small_Button_03.sub",
				},

				{
					"name" : "fov_off",
					"type" : "radio_button",

					"x" : 110 + 50,
					"y" : 210,

					"text" : uiScriptLocale.FOV_OPTION_OFF,

					"default_image" : ROOT_PATH + "small_Button_01.sub",
					"over_image" : ROOT_PATH + "small_Button_02.sub",
					"down_image" : ROOT_PATH + "small_Button_03.sub",
				},
				## END_OF_ENABLE_FOV_OPTION