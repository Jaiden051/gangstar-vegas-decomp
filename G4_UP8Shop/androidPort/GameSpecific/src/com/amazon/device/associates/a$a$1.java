// Decompiled from classes.dex (SourceFile: a$a$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class a$a$1 implements android.view.animation.Animation.AnimationListener {
    // Fields
    final com.amazon.device.associates.a$a a;

    // Methods
    a$a$1(com.amazon.device.associates.a$a p0)
    {
      super();
      this.a = p0;
    
    }

    public void onAnimationEnd(android.view.animation.Animation p0)
    {
      a$a.f(this.a).removeAllViews();
      this.a.removeAllViews();
      a$a.a(this.a).removeView(this.a);
      a$a.a(this.a, false);
    }

    public void onAnimationRepeat(android.view.animation.Animation p0)
    {
      ;
    }

    public void onAnimationStart(android.view.animation.Animation p0)
    {
      ;
    }

}
