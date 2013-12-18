#ifndef _HELLO_WORLD_FOR_TIZEN_NATIVE_FORM_FACTORY_H_
#define _HELLO_WORLD_FOR_TIZEN_NATIVE_FORM_FACTORY_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FUi.h>
#include <FUiIme.h>
#include <FGraphics.h>
#include <gl.h>

class HelloWorldForTizenNativeFormFactory
	: public Tizen::Ui::Scenes::IFormFactory
{
public:
	HelloWorldForTizenNativeFormFactory(void);
	virtual ~HelloWorldForTizenNativeFormFactory(void);

	virtual Tizen::Ui::Controls::Form* CreateFormN(const Tizen::Base::String& formId, const Tizen::Ui::Scenes::SceneId& sceneId);
};

#endif // _HELLO_WORLD_FOR_TIZEN_NATIVE_FORM_FACTORY_H_
