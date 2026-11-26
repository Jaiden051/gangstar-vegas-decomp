// Decompiled from classes.dex (SourceFile: AppLinkNavigation$NavigationResult.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

public final class AppLinkNavigation$NavigationResult extends com.gameloft.android.DecompRT.EnumBase<AppLinkNavigation$NavigationResult> {
    // Fields
    public static final bolts.AppLinkNavigation$NavigationResult a;
    public static final bolts.AppLinkNavigation$NavigationResult b;
    public static final bolts.AppLinkNavigation$NavigationResult c;
    private static final bolts.AppLinkNavigation$NavigationResult[] f;
    private java.lang.String d;
    private boolean e;

    // Methods
    static
    {
      bolts.AppLinkNavigation$NavigationResult[] v0;
      a = new bolts.AppLinkNavigation$NavigationResult("FAILED", 0, "failed", false);
      b = new bolts.AppLinkNavigation$NavigationResult("WEB", 1, "web", true);
      c = new bolts.AppLinkNavigation$NavigationResult("APP", 2, "app", true);
      v0 = new bolts.AppLinkNavigation$NavigationResult[3];
      v0[0] = a;
      v0[1] = b;
      v0[2] = c;
      f = (bolts.AppLinkNavigation$NavigationResult[])v0;
    }

    private AppLinkNavigation$NavigationResult(String p0, int p1, String p2, boolean p3)
    {
      super(p0, p1);
      this.d = p2;
      this.e = p3;
    }

    public static bolts.AppLinkNavigation$NavigationResult valueOf(String p0)
    {
      return (bolts.AppLinkNavigation$NavigationResult)com.gameloft.android.DecompRT.EnumBase.valueOf(bolts.AppLinkNavigation$NavigationResult.class, p0);
    }

    public static bolts.AppLinkNavigation$NavigationResult[] values()
    {
      return (bolts.AppLinkNavigation$NavigationResult[])f.clone();
    }

    public final String a()
    {
      return this.d;
    }

    public final boolean b()
    {
      return this.e;
    }

}
