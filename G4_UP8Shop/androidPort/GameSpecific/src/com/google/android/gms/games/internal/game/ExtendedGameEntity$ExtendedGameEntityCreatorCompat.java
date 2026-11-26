// Decompiled from classes.dex (SourceFile: ExtendedGameEntity$ExtendedGameEntityCreatorCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.game;

import com.google.android.gms.games.GameEntity;
final class ExtendedGameEntity$ExtendedGameEntityCreatorCompat extends com.google.android.gms.games.internal.game.ExtendedGameEntityCreator {
    // Methods
    ExtendedGameEntity$ExtendedGameEntityCreatorCompat()
    {
      super();
    }

    public final com.google.android.gms.games.internal.game.ExtendedGameEntity a(
            android.os.Parcel p0)
    {
      com.google.android.gms.games.GameEntity v4;
      int Int;
      boolean v6;
      int v7;
      long Long;
      long v9;
      String String;
      long v11;
      String v12;
      int v13;
      java.util.ArrayList v14;
      int i;
      if ( ExtendedGameEntity.b(ExtendedGameEntity.gM())
        || ExtendedGameEntity.aQ(com.google.android.gms.games.internal.game.ExtendedGameEntity.class.getCanonicalName()) )
      {
        return super.a(p0);
      }
      v4 = (com.google.android.gms.games.GameEntity)com.google.android.gms.games.GameEntity.CREATOR.createFromParcel(p0);
      Int = p0.readInt();
      v6 = p0.readInt() == 1;
      v7 = p0.readInt();
      Long = p0.readLong();
      v9 = p0.readLong();
      String = p0.readString();
      v11 = p0.readLong();
      v12 = p0.readString();
      v13 = p0.readInt();
      v14 = new java.util.ArrayList(v13);
      for ( i = 0; i < v13; ++i )
        v14.add(GameBadgeEntity.CREATOR.a(p0));
      return new com.google.android.gms.games.internal.game.ExtendedGameEntity(2, v4, Int, v6, v7, Long, v9, String, v11, v12, v14, null);
    }

    /* synthetic */ public final Object createFromParcel(
            android.os.Parcel p0)
    {
      return this.a(p0);
    }

}
