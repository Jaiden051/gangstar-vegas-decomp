// Decompiled from classes.dex (SourceFile: GameInstanceRef.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.game;

import com.google.android.gms.games.internal.constants.PlatformType;
import com.google.android.gms.internal.hl;
public final class GameInstanceRef extends com.google.android.gms.common.data.d implements com.google.android.gms.games.internal.game.GameInstance {
    // Methods
    GameInstanceRef(com.google.android.gms.common.data.DataHolder p0, int p1)
    {
      super(p0, p1);
    }

    private String a()
    {
      return this.e("external_game_id");
    }

    private String b()
    {
      return this.e("instance_display_name");
    }

    private boolean c()
    {
      return this.c("real_time_support") > 0;
    }

    private boolean d()
    {
      return this.c("turn_based_support") > 0;
    }

    private int e()
    {
      return this.c("platform_type");
    }

    private String f()
    {
      return this.e("package_name");
    }

    private boolean h()
    {
      return this.c("piracy_check") > 0;
    }

    private boolean j()
    {
      return this.c("installed") > 0;
    }

    public final String toString()
    {
      return hl.e(this).a("ApplicationId", this.e("external_game_id")).a("DisplayName", this.e("instance_display_name")).a("SupportsRealTime", Boolean.valueOf(this.c("real_time_support") > 0)).a("SupportsTurnBased", Boolean.valueOf(this.c("turn_based_support") > 0)).a("PlatformType", PlatformType.cm(this.c("platform_type"))).a("PackageName", this.e("package_name")).a("PiracyCheckEnabled", Boolean.valueOf(this.c("piracy_check") > 0)).a("Installed", Boolean.valueOf(this.c("installed") > 0)).toString();
    }

}
