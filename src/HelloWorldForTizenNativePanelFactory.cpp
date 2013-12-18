#include "HelloWorldForTizenNativePanelFactory.h"

using namespace Tizen::Ui::Scenes;


HelloWorldForTizenNativePanelFactory::HelloWorldForTizenNativePanelFactory(void)
{
}

HelloWorldForTizenNativePanelFactory::~HelloWorldForTizenNativePanelFactory(void)
{
}

Tizen::Ui::Controls::Panel*
HelloWorldForTizenNativePanelFactory::CreatePanelN(const Tizen::Base::String& panelId, const Tizen::Ui::Scenes::SceneId& sceneId)
{
	SceneManager* pSceneManager = SceneManager::GetInstance();
	AppAssert(pSceneManager);
	Tizen::Ui::Controls::Panel* pNewPanel = null;

	// TODO: Add your panel creation code here
	return pNewPanel;
}
