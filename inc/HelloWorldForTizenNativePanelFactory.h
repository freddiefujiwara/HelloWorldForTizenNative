#ifndef _HELLO_WORLD_FOR_TIZEN_NATIVE_PANEL_FACTORY_H_
#define _HELLO_WORLD_FOR_TIZEN_NATIVE_PANEL_FACTORY_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FUi.h>
#include <FUiIme.h>
#include <FGraphics.h>
#include <gl.h>

class HelloWorldForTizenNativePanelFactory
	: public Tizen::Ui::Scenes::IPanelFactory
{
public:
	HelloWorldForTizenNativePanelFactory(void);
	virtual ~HelloWorldForTizenNativePanelFactory(void);

	virtual Tizen::Ui::Controls::Panel* CreatePanelN(const Tizen::Base::String& panelId, const Tizen::Ui::Scenes::SceneId& sceneId);
};

#endif // _HELLO_WORLD_FOR_TIZEN_NATIVE_PANEL_FACTORY_H_
