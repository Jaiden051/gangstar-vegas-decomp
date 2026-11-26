// Decompiled from classes.dex (SourceFile: QuestEntityCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.quest;

import android.net.Uri;
import com.google.android.gms.games.GameEntity;
public class QuestEntityCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public QuestEntityCreator()
    {
      super();
    }

    static void a(com.google.android.gms.games.quest.QuestEntity p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 1, (android.os.Parcelable)p0.l(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.a(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.o());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.d(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.e(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.c(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.p());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.q());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 9, p0.f(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 10, p0.w_(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 12, p0.b(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 13, p0.r());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 14, p0.s());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 15, p0.m());
      com.google.android.gms.common.internal.safeparcel.b.b(p1, 17, p0.k(), false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 16, p0.n());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.u());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.games.quest.QuestEntity _typed_createFromParcel(android.os.Parcel p0)
    {
      int v1;
      int v2;
      com.google.android.gms.games.GameEntity v3;
      String v4;
      long v5;
      android.net.Uri v6;
      String v7;
      String v8;
      long v9;
      long v10;
      android.net.Uri v11;
      String v12;
      String v13;
      long v14;
      long v15;
      int v16;
      int v17;
      java.util.ArrayList v18;
      int v19;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = 0;
      v3 = null;
      v4 = null;
      v5 = 0;
      v6 = null;
      v7 = null;
      v8 = null;
      v9 = 0;
      v10 = 0;
      v11 = null;
      v12 = null;
      v13 = null;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = null;
      while ( p0.dataPosition() < v1 )
      {
        v19 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v19) )
        {
          case 1:
            v3 = (com.google.android.gms.games.GameEntity)com.google.android.gms.common.internal.safeparcel.a.a(p0, v19, GameEntity.CREATOR);
            break;
          case 2:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v19);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v19);
            break;
          case 4:
            v6 = (android.net.Uri)com.google.android.gms.common.internal.safeparcel.a.a(p0, v19, Uri.CREATOR);
            break;
          case 5:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v19);
            break;
          case 6:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v19);
            break;
          case 7:
            v9 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v19);
            break;
          case 8:
            v10 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v19);
            break;
          case 9:
            v11 = (android.net.Uri)com.google.android.gms.common.internal.safeparcel.a.a(p0, v19, Uri.CREATOR);
            break;
          case 10:
            v12 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v19);
            break;
          case 12:
            v13 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v19);
            break;
          case 13:
            v14 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v19);
            break;
          case 14:
            v15 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v19);
            break;
          case 15:
            v16 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v19);
            break;
          case 16:
            v17 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v19);
            break;
          case 17:
            v18 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v19, (android.os.Parcelable.Creator)MilestoneEntity.CREATOR);
            break;
          case 1000:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v19);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v19);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.games.quest.QuestEntity(v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18);
    }

    private static com.google.android.gms.games.quest.QuestEntity[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.games.quest.QuestEntity[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      int v3;
      com.google.android.gms.games.GameEntity v4;
      String v5;
      long v6;
      android.net.Uri v7;
      String v8;
      String v9;
      long v10;
      long v11;
      android.net.Uri v12;
      String v13;
      String v14;
      long v15;
      long v16;
      int v17;
      int v18;
      java.util.ArrayList v19;
      int v20;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      v5 = null;
      v6 = 0;
      v7 = null;
      v8 = null;
      v9 = null;
      v10 = 0;
      v11 = 0;
      v12 = null;
      v13 = null;
      v14 = null;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = null;
      while ( p0.dataPosition() < v2 )
      {
        v20 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v20) )
        {
          case 1:
            v4 = (com.google.android.gms.games.GameEntity)com.google.android.gms.common.internal.safeparcel.a.a(p0, v20, GameEntity.CREATOR);
            break;
          case 2:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v20);
            break;
          case 3:
            v6 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v20);
            break;
          case 4:
            v7 = (android.net.Uri)com.google.android.gms.common.internal.safeparcel.a.a(p0, v20, Uri.CREATOR);
            break;
          case 5:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v20);
            break;
          case 6:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v20);
            break;
          case 7:
            v10 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v20);
            break;
          case 8:
            v11 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v20);
            break;
          case 9:
            v12 = (android.net.Uri)com.google.android.gms.common.internal.safeparcel.a.a(p0, v20, Uri.CREATOR);
            break;
          case 10:
            v13 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v20);
            break;
          case 12:
            v14 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v20);
            break;
          case 13:
            v15 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v20);
            break;
          case 14:
            v16 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v20);
            break;
          case 15:
            v17 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v20);
            break;
          case 16:
            v18 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v20);
            break;
          case 17:
            v19 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v20, (android.os.Parcelable.Creator)MilestoneEntity.CREATOR);
            break;
          case 1000:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v20);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v20);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.games.quest.QuestEntity(v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.games.quest.QuestEntity[p0];
    }

}
