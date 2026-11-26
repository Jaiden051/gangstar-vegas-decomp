// Decompiled from classes.dex (SourceFile: IGPFreemiumActivity$IGPInterface.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

class IGPFreemiumActivity$IGPInterface {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity a;

    // Methods
    private IGPFreemiumActivity$IGPInterface(com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ IGPFreemiumActivity$IGPInterface(com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0, int p1)
    {
      this(p0);
    }

    public void getInstalledGames(String p0)
    {
      android.content.SharedPreferences.Editor v2;
      try
      {
        v2 = this.a.getSharedPreferences("IGP_Prefs", 0).edit();
        v2.putString("INSTALLED_GAMES", p0);
        v2.commit();
      }
      catch ( Exception e )
      {
      }
    }

    public void getRewardsAvailable(String p0)
    {
      android.content.SharedPreferences.Editor v2;
      try
      {
        v2 = this.a.getSharedPreferences("IGP_Prefs", 0).edit();
        v2.putString("REWARDS_AVAILABLE", p0);
        v2.commit();
      }
      catch ( Exception e )
      {
      }
    }

    public void getRewardsUser(String p0)
    {
      android.content.SharedPreferences.Editor v2;
      try
      {
        v2 = this.a.getSharedPreferences("IGP_Prefs", 0).edit();
        v2.putString("REWARDS_USER", p0);
        v2.commit();
      }
      catch ( Exception e )
      {
      }
    }

}
