// Decompiled from classes.dex (SourceFile: GameBadgeRef.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.game;

public final class GameBadgeRef extends com.google.android.gms.common.data.d implements com.google.android.gms.games.internal.game.GameBadge {
    // Methods
    GameBadgeRef(com.google.android.gms.common.data.DataHolder p0, int p1)
    {
      super(p0, p1);
    }

    private com.google.android.gms.games.internal.game.GameBadge e()
    {
      return (com.google.android.gms.games.internal.game.GameBadge)new com.google.android.gms.games.internal.game.GameBadgeEntity((com.google.android.gms.games.internal.game.GameBadge)this);
    }

    public final int a()
    {
      return this.c("badge_type");
    }

    public final String b()
    {
      return this.e("badge_title");
    }

    public final String c()
    {
      return this.e("badge_description");
    }

    public final android.net.Uri d()
    {
      return this.h("badge_icon_image_uri");
    }

    public final int describeContents()
    {
      return 0;
    }

    public final boolean equals(Object p0)
    {
      return GameBadgeEntity.a((com.google.android.gms.games.internal.game.GameBadge)this, p0);
    }

    /* synthetic */ public final Object h()
    {
      return this.e();
    }

    public final int hashCode()
    {
      return GameBadgeEntity.a((com.google.android.gms.games.internal.game.GameBadge)this);
    }

    public final String toString()
    {
      return GameBadgeEntity.b((com.google.android.gms.games.internal.game.GameBadge)this);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      ((com.google.android.gms.games.internal.game.GameBadgeEntity)this.e()).writeToParcel(p0, p1);
    }

}
