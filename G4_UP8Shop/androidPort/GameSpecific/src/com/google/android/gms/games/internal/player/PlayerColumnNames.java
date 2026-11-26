// Decompiled from classes.dex (SourceFile: PlayerColumnNames.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.player;

import android.text.TextUtils;
public final class PlayerColumnNames {
    // Fields
    public final java.lang.String a;
    public final java.lang.String b;
    public final java.lang.String c;
    public final java.lang.String d;
    public final java.lang.String e;
    public final java.lang.String f;
    public final java.lang.String g;
    public final java.lang.String h;
    public final java.lang.String i;
    public final java.lang.String j;
    public final java.lang.String k;
    public final java.lang.String l;
    public final java.lang.String m;
    public final java.lang.String n;
    public final java.lang.String o;
    public final java.lang.String p;
    public final java.lang.String q;
    public final java.lang.String r;
    public final java.lang.String s;
    public final java.lang.String t;
    public final java.lang.String u;
    public final java.lang.String v;
    public final java.lang.String w;
    public final java.lang.String x;

    // Methods
    public PlayerColumnNames(String p0)
    {
      super();
      if ( TextUtils.isEmpty(p0) )
      {
        this.a = "external_player_id";
        this.b = "profile_name";
        this.c = "profile_icon_image_uri";
        this.d = "profile_icon_image_url";
        this.e = "profile_hi_res_image_uri";
        this.f = "profile_hi_res_image_url";
        this.g = "last_updated";
        this.h = "is_in_circles";
        this.i = "played_with_timestamp";
        this.j = "current_xp_total";
        this.k = "current_level";
        this.l = "current_level_min_xp";
        this.m = "current_level_max_xp";
        this.n = "next_level";
        this.o = "next_level_max_xp";
        this.p = "last_level_up_timestamp";
        this.q = "player_title";
        this.r = "has_all_public_acls";
        this.s = "most_recent_external_game_id";
        this.t = "most_recent_game_name";
        this.u = "most_recent_activity_timestamp";
        this.v = "most_recent_game_icon_uri";
        this.w = "most_recent_game_hi_res_uri";
        this.x = "most_recent_game_featured_uri";
      }
      else
      {
        this.a = p0 + "external_player_id";
        this.b = p0 + "profile_name";
        this.c = p0 + "profile_icon_image_uri";
        this.d = p0 + "profile_icon_image_url";
        this.e = p0 + "profile_hi_res_image_uri";
        this.f = p0 + "profile_hi_res_image_url";
        this.g = p0 + "last_updated";
        this.h = p0 + "is_in_circles";
        this.i = p0 + "played_with_timestamp";
        this.j = p0 + "current_xp_total";
        this.k = p0 + "current_level";
        this.l = p0 + "current_level_min_xp";
        this.m = p0 + "current_level_max_xp";
        this.n = p0 + "next_level";
        this.o = p0 + "next_level_max_xp";
        this.p = p0 + "last_level_up_timestamp";
        this.q = p0 + "player_title";
        this.r = p0 + "has_all_public_acls";
        this.s = p0 + "most_recent_external_game_id";
        this.t = p0 + "most_recent_game_name";
        this.u = p0 + "most_recent_activity_timestamp";
        this.v = p0 + "most_recent_game_icon_uri";
        this.w = p0 + "most_recent_game_hi_res_uri";
        this.x = p0 + "most_recent_game_featured_uri";
      }
    }

}
