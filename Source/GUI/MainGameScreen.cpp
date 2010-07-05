#include <MainGameScreen.h>

#include <GUI.h>
#include <ImageManager.h>
#include <Renderer.h>


MainGameScreen::MainGameScreen()
{

}

bool MainGameScreen::Init()
{
    RootWindow = CEGUI::WindowManager::getSingleton().loadWindowLayout("MainGameScreen.layout");

    try
    {
        CEGUI::Window* ExitButton = GUI->getWindowManager()->getWindow("MainGameScreen/ExitButton");
        if (ExitButton != NULL)
        {
            ExitButton->subscribeEvent(CEGUI::PushButton::EventMouseClick, CEGUI::Event::Subscriber(&MainGameScreen::ExitPressed, this));
        }
    }

    catch(CEGUI::Exception &e)
    {
    }
}

MainGameScreen::~MainGameScreen()
{

}

bool MainGameScreen::ExitPressed(const CEGUI::EventArgs& pEventArgs)
{
    GUI->TerminateRunning();
}
