// Decompiled from classes.dex (SourceFile: GameBadgeEntity$GameBadgeEntityCreatorCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.game;

import android.net.Uri;
final class GameBadgeEntity$GameBadgeEntityCreatorCompat extends com.google.android.gms.games.internal.game.GameBadgeEntityCreator {
    // Methods
    GameBadgeEntity$GameBadgeEntityCreatorCompat()
    {
      super();
    }

    public final com.google.android.gms.games.internal.game.GameBadgeEntity a(
            android.os.Parcel p0)
    {
      int Int;
      String String;
      String v6;
      String v7; // RETVAL
      android.net.Uri v8;
      if ( GameBadgeEntity.b(GameBadgeEntity.gM())
        || GameBadgeEntity.aQ(com.google.android.gms.games.internal.game.GameBadgeEntity.class.getCanonicalName()) )
      {
        return super.a(p0);
      }
      Int = p0.readInt();
      String = p0.readString();
      v6 = p0.readString();
      v7 = p0.readString();
      if ( v7 != null )
        v8 = Uri.parse(v7);
      else
        v8 = null;
      return new com.google.android.gms.games.internal.game.GameBadgeEntity(1, Int, String, v6, v8);
    }

    /* synthetic */ public final Object createFromParcel(android.os.Parcel p0)
    {
      return this.a(p0);
    }

}
