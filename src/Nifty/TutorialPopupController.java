/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package Nifty;

import de.lessvoid.nifty.Nifty;
import de.lessvoid.nifty.controls.Controller;
import de.lessvoid.nifty.controls.Parameters;
import de.lessvoid.nifty.elements.Element;
import de.lessvoid.nifty.input.NiftyInputEvent;
import de.lessvoid.nifty.screen.Screen;
import de.lessvoid.xml.xpp3.Attributes;
import java.util.Properties;
import javax.annotation.Nonnull;

/**
 *
 * @author Dallas
 */
public class TutorialPopupController implements Controller {

	Nifty nifty;
	Screen screen;
	Element popup;

	public void bind(Nifty nifty, Screen screen, Element element, Parameters parameter) {
		this.nifty = nifty;
		this.screen = screen;
		this.popup = element;
	}

    public void init(@Nonnull Parameters arg0) {

	}

	public void onStartScreen() {
	}

	public void onFocus(boolean getFocus) {
	}

	public boolean inputEvent(NiftyInputEvent inputEvent) {
		return false;
	}

	public void onEndScreen() {
	}
}
