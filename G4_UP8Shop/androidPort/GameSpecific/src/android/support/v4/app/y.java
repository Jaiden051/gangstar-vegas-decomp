// Decompiled from classes.dex (SourceFile: y.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

final class y implements android.view.animation.Animation.AnimationListener {
    // Fields
    final android.support.v4.app.Fragment a;
    final android.support.v4.app.FragmentManagerImpl b;

    // Methods
    y(android.support.v4.app.FragmentManagerImpl p0, android.support.v4.app.Fragment p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void onAnimationEnd(android.view.animation.Animation p0)
    {
      if ( this.a.mAnimatingAway != null )
      {
        this.a.mAnimatingAway = null;
        this.b.a(this.a, this.a.mStateAfterAnimating, 0, 0, false);
      }
    }

    public final void onAnimationRepeat(android.view.animation.Animation p0)
    {
      ;
    }

    public final void onAnimationStart(android.view.animation.Animation p0)
    {
      ;
    }

}
