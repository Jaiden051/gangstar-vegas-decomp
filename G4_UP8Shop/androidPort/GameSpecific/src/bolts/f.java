// Decompiled from classes.dex (SourceFile: f.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

final class f implements bolts.l {
    // Fields
    final android.content.Context a;

    // Methods
    f(android.content.Context p0)
    {
      super();
      this.a = p0;
    
    }

    private bolts.AppLinkNavigation$NavigationResult a(bolts.Task<bolts.d> p0)
    {
      return AppLinkNavigation.navigate(this.a, (bolts.d)p0.c());
    }

    /* synthetic */ public final Object then(bolts.Task p0)
    {
      return AppLinkNavigation.navigate(this.a, (bolts.d)p0.c());
    }

}
