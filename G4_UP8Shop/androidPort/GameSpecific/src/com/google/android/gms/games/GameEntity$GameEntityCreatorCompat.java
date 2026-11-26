// Decompiled from classes.dex (SourceFile: GameEntity$GameEntityCreatorCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games;

import android.net.Uri;
final class GameEntity$GameEntityCreatorCompat extends com.google.android.gms.games.GameEntityCreator {
    // Methods
    GameEntity$GameEntityCreatorCompat()
    {
      super();
    }

    public final com.google.android.gms.games.GameEntity a(android.os.Parcel p0)
    {
      String String;
      String v5;
      String v6;
      String v7;
      String v8;
      String v9;
      String v10; // RETVAL
      android.net.Uri v11;
      String v12; // RETVAL
      android.net.Uri v13;
      String v14; // RETVAL
      android.net.Uri v15;
      if ( GameEntity.b(GameEntity.gM()) || GameEntity.aQ(com.google.android.gms.games.GameEntity.class.getCanonicalName()) )
        return super.a(p0);
      String = p0.readString();
      v5 = p0.readString();
      v6 = p0.readString();
      v7 = p0.readString();
      v8 = p0.readString();
      v9 = p0.readString();
      v10 = p0.readString();
      if ( v10 != null )
        v11 = Uri.parse(v10);
      else
        v11 = null;
      v12 = p0.readString();
      if ( v12 != null )
        v13 = Uri.parse(v12);
      else
        v13 = null;
      v14 = p0.readString();
      if ( v14 != null )
        v15 = Uri.parse(v14);
      else
        v15 = null;
      return new com.google.android.gms.games.GameEntity(4, String, v5, v6, v7, v8, v9, v11, v13, v15, p0.readInt() > 0, p0.readInt() > 0, p0.readString(), p0.readInt(), p0.readInt(), p0.readInt(), false, false, null, null, null, false, false, false);
    }

    /* synthetic */ public final Object createFromParcel(android.os.Parcel p0)
    {
      return this.a(p0);
    }

}
