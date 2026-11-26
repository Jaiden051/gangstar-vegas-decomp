// Decompiled from classes.dex (SourceFile: GameRef.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games;

public final class GameRef extends com.google.android.gms.common.data.d implements com.google.android.gms.games.Game {
    // Methods
    public GameRef(com.google.android.gms.common.data.DataHolder p0, int p1)
    {
      super(p0, p1);
    }

    private com.google.android.gms.games.Game z()
    {
      return (com.google.android.gms.games.Game)new com.google.android.gms.games.GameEntity((com.google.android.gms.games.Game)this);
    }

    public final String a()
    {
      return this.e("external_game_id");
    }

    public final void a(android.database.CharArrayBuffer p0)
    {
      this.a("display_name", p0);
    }

    public final String b()
    {
      return this.e("display_name");
    }

    public final void b(android.database.CharArrayBuffer p0)
    {
      this.a("game_description", p0);
    }

    public final String c()
    {
      return this.e("primary_category");
    }

    public final void c(android.database.CharArrayBuffer p0)
    {
      this.a("developer_name", p0);
    }

    public final String d()
    {
      return this.e("secondary_category");
    }

    public final int describeContents()
    {
      return 0;
    }

    public final String e()
    {
      return this.e("game_description");
    }

    public final boolean equals(Object p0)
    {
      return GameEntity.a((com.google.android.gms.games.Game)this, p0);
    }

    public final String f()
    {
      return this.e("developer_name");
    }

    public final android.net.Uri f_()
    {
      return this.h("game_icon_image_uri");
    }

    /* synthetic */ public final Object h()
    {
      return this.z();
    }

    public final int hashCode()
    {
      return GameEntity.a((com.google.android.gms.games.Game)this);
    }

    public final String j()
    {
      return this.e("game_icon_image_url");
    }

    public final android.net.Uri k()
    {
      return this.h("game_hi_res_image_uri");
    }

    public final String l()
    {
      return this.e("game_hi_res_image_url");
    }

    public final android.net.Uri m()
    {
      return this.h("featured_image_uri");
    }

    public final String n()
    {
      return this.e("featured_image_url");
    }

    public final boolean o()
    {
      return this.d("play_enabled_game");
    }

    public final boolean p()
    {
      return this.d("muted");
    }

    public final boolean q()
    {
      return this.d("identity_sharing_confirmed");
    }

    public final boolean r()
    {
      return this.c("installed") > 0;
    }

    public final String s()
    {
      return this.e("package_name");
    }

    public final int t()
    {
      return this.c("gameplay_acl_status");
    }

    public final String toString()
    {
      return GameEntity.b((com.google.android.gms.games.Game)this);
    }

    public final int u()
    {
      return this.c("achievement_total_count");
    }

    public final int v()
    {
      return this.c("leaderboard_count");
    }

    public final boolean w()
    {
      return this.c("real_time_support") > 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      ((com.google.android.gms.games.GameEntity)this.z()).writeToParcel(p0, p1);
    }

    public final boolean x()
    {
      return this.c("turn_based_support") > 0;
    }

    public final boolean y()
    {
      return this.c("snapshots_enabled") > 0;
    }

}
