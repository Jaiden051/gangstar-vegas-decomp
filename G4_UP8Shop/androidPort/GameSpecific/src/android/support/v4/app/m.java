// Decompiled from classes.dex (SourceFile: m.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

final class m implements android.support.v4.app.r {
    // Fields
    final android.support.v4.app.Fragment a;

    // Methods
    m(android.support.v4.app.Fragment p0)
    {
      super();
      this.a = p0;
    
    }

    public final android.view.View a(int p0)
    {
      if ( this.a.mView == null )
        throw new IllegalStateException("Fragment does not have a view");
      return this.a.mView.findViewById(p0);
    }

}
