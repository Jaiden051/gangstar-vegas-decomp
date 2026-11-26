// Decompiled from classes.dex (SourceFile: VirtualKeyboard.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

public class VirtualKeyboard extends android.widget.EditText implements android.view.View.OnFocusChangeListener {
    // Fields
    static com.gameloft.android.GAND.GloftGGSS.GLUtils.VirtualKeyboard a;
    static com.gameloft.android.GAND.GloftGGSS.GLUtils.r b;
    static java.lang.ref.WeakReference c;
    public static android.text.InputFilter f;
    public static android.widget.TextView.OnEditorActionListener g;
    android.view.View d;
    android.content.Context e;

    // Methods
    static
    {
      f = (android.text.InputFilter)new com.gameloft.android.GAND.GloftGGSS.GLUtils.m();
      g = (android.widget.TextView.OnEditorActionListener)new com.gameloft.android.GAND.GloftGGSS.GLUtils.n();
    }

    public VirtualKeyboard(android.app.Activity p0)
    {
      super(p0);
      this.d = null;
      this.e = null;
      this.setWidth(0);
      this.setHeight(0);
      this.setMaxHeight(0);
      this.setMaxWidth(0);
      this.setImeOptions(0x2000000);
      this.setEnabled(true);
      this.setFocusable(true);
      this.setFocusableInTouchMode(true);
      this.setOnFocusChangeListener(this);
      this.e = p0;
      a = this;
      c = new java.lang.ref.WeakReference(p0);
      b = (com.gameloft.android.GAND.GloftGGSS.GLUtils.r)p0;
    }

    public static String GetVirtualKeyboardText()
    {
      if ( getInstance() != null )
        return getInstance().getText().toString();
      else
        return "";
    }

    public static void HideKeyboard()
    {
      com.gameloft.android.GAND.GloftGGSS.GLUtils.VirtualKeyboard Instance;
      if ( isKeyboardVisible() )
      {
        Instance = getInstance();
        try
        {
          ((android.app.Activity)c.get()).runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.GLUtils.p(Instance));
        }
        catch ( Exception e )
        {
        }
      }
    }

    public static void ShowKeyboard(
            com.gameloft.android.GAND.GloftGGSS.GLUtils.VirtualKeyboard p0,
            android.view.View p1,
            String p2,
            int p3)
    {
      try
      {
        ((android.app.Activity)c.get()).runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.GLUtils.o(p0, p2, p3, p1));
      }
      catch ( Exception e )
      {
      }
    }

    public static void ShowKeyboard(String p0, int p1)
    {
      if ( !isKeyboardVisible() )
        ShowKeyboard(getInstance(), b.b(), p0, p1);
    }

    private void a()
    {
      try
      {
        ((android.app.Activity)c.get()).runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.GLUtils.p(this));
      }
      catch ( Exception e )
      {
      }
    }

    public static com.gameloft.android.GAND.GloftGGSS.GLUtils.VirtualKeyboard getInstance()
    {
      return a;
    }

    public static boolean isKeyboardVisible()
    {
      return b.b() == getInstance();
    }

    public boolean dispatchKeyEvent(android.view.KeyEvent p0)
    {
      if ( p0.getAction() == 1 && (p0.getKeyCode() == 4 || p0.getKeyCode() == 66) )
        HideKeyboard();
      return super.dispatchKeyEvent(p0);
    }

    public boolean dispatchKeyEventPreIme(android.view.KeyEvent p0)
    {
      if ( p0.getAction() == 1 && (p0.getKeyCode() == 4 || p0.getKeyCode() == 66) )
      {
        try
        {
          ((android.app.Activity)c.get()).runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.GLUtils.q(this));
          return super.dispatchKeyEventPreIme(p0);
        }
        catch ( Exception e )
        {
        }
      }
      return super.dispatchKeyEventPreIme(p0);
    }

    public void onFocusChange(android.view.View p0, boolean p1)
    {
      android.view.inputmethod.InputMethodManager v3;
      v3 = (android.view.inputmethod.InputMethodManager)((android.app.Activity)c.get()).getSystemService("input_method");
      if ( p1 )
      {
        v3.showSoftInput(this, 2);
      }
      else
      {
        v3.hideSoftInputFromWindow(this.getWindowToken(), 0);
        LowProfileListener.ActivateImmersiveMode((android.app.Activity)this.e);
      }
    }

    public void onTextChanged(CharSequence p0, int p1, int p2, int p3)
    {
      if ( getInstance() != null && SUtils.getContext() != null && p0.toString() != null )
      {
        try
        {
          SUtils.nativeSendKeyboardData(p0.toString());
        }
        catch ( Exception e )
        {
        }
      }
      super.onTextChanged(p0, p1, p2, p3);
    }

}
