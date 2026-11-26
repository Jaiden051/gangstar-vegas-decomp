// Decompiled from classes.dex (SourceFile: AchievementRef.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.achievement;

import com.google.android.gms.internal.gy;
import com.google.android.gms.internal.hl;
public final class AchievementRef extends com.google.android.gms.common.data.d implements com.google.android.gms.games.achievement.Achievement {
    // Methods
    AchievementRef(com.google.android.gms.common.data.DataHolder p0, int p1)
    {
      super(p0, p1);
    }

    public final String a()
    {
      return this.e("external_achievement_id");
    }

    public final void a(android.database.CharArrayBuffer p0)
    {
      this.a("name", p0);
    }

    public final int b()
    {
      return this.c("type");
    }

    public final void b(android.database.CharArrayBuffer p0)
    {
      this.a("description", p0);
    }

    public final String c()
    {
      return this.e("name");
    }

    public final void c(android.database.CharArrayBuffer p0)
    {
      gy.A(this.c("type") == 1);
      this.a("formatted_total_steps", p0);
    }

    public final String d()
    {
      return this.e("description");
    }

    public final void d(android.database.CharArrayBuffer p0)
    {
      gy.A(this.c("type") == 1);
      this.a("formatted_current_steps", p0);
    }

    public final android.net.Uri e()
    {
      return this.h("unlocked_icon_image_uri");
    }

    public final String f()
    {
      return this.e("unlocked_icon_image_url");
    }

    public final android.net.Uri g()
    {
      return this.h("revealed_icon_image_uri");
    }

    public final String h()
    {
      return this.e("revealed_icon_image_url");
    }

    public final int h_()
    {
      gy.A(this.c("type") == 1);
      return this.c("total_steps");
    }

    public final String j()
    {
      gy.A(this.c("type") == 1);
      return this.e("formatted_total_steps");
    }

    public final com.google.android.gms.games.Player k()
    {
      return (com.google.android.gms.games.Player)new com.google.android.gms.games.PlayerRef(this.v_, this.z_);
    }

    public final int l()
    {
      return this.c("state");
    }

    public final int m()
    {
      gy.A(this.c("type") == 1);
      return this.c("current_steps");
    }

    public final String n()
    {
      gy.A(this.c("type") == 1);
      return this.e("formatted_current_steps");
    }

    public final long o()
    {
      return this.b("last_updated_timestamp");
    }

    public final long p()
    {
      if ( this.a("instance_xp_value") && !this.i("instance_xp_value") )
        return this.b("instance_xp_value");
      else
        return this.b("definition_xp_value");
    }

    public final String toString()
    {
      com.google.android.gms.internal.hl$a v1;
      v1 = hl.e(this).a("AchievementId", this.e("external_achievement_id")).a("Type", Integer.valueOf(this.c("type"))).a("Name", this.e("name")).a("Description", this.e("description")).a("UnlockedImageUri", this.h("unlocked_icon_image_uri")).a("UnlockedImageUrl", this.e("unlocked_icon_image_url")).a("RevealedImageUri", this.h("revealed_icon_image_uri")).a("RevealedImageUrl", this.e("revealed_icon_image_url")).a("Player", new com.google.android.gms.games.PlayerRef(this.v_, this.z_)).a("LastUpdatedTimeStamp", Long.valueOf(this.b("last_updated_timestamp")));
      if ( this.c("type") == 1 )
      {
        gy.A(this.c("type") == 1);
        v1.a("CurrentSteps", Integer.valueOf(this.c("current_steps")));
        gy.A(this.c("type") == 1);
        v1.a("TotalSteps", Integer.valueOf(this.c("total_steps")));
      }
      return v1.toString();
    }

}
