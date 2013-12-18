#include <new>
#include "HelloWorldForTizenNativeFormFactory.h"
#include "HelloWorldForTizenNativeMainForm.h"
#include "AppResourceId.h"

using namespace Tizen::Ui::Scenes;


HelloWorldForTizenNativeFormFactory::HelloWorldForTizenNativeFormFactory(void)
{
}

HelloWorldForTizenNativeFormFactory::~HelloWorldForTizenNativeFormFactory(void)
{
}

Tizen::Ui::Controls::Form*
HelloWorldForTizenNativeFormFactory::CreateFormN(const Tizen::Base::String& formId, const Tizen::Ui::Scenes::SceneId& sceneId)
{
	SceneManager* pSceneManager = SceneManager::GetInstance();
	AppAssert(pSceneManager);
	Tizen::Ui::Controls::Form* pNewForm = null;

	if (formId == IDL_FORM)
	{
		HelloWorldForTizenNativeMainForm* pForm = new (std::nothrow) HelloWorldForTizenNativeMainForm();
		TryReturn(pForm != null, null, "The memory is insufficient.");
		pForm->Initialize();
		pSceneManager->AddSceneEventListener(sceneId, *pForm);
		pNewForm = pForm;
	}
	// TODO: Add your form creation code here

	return pNewForm;
}
