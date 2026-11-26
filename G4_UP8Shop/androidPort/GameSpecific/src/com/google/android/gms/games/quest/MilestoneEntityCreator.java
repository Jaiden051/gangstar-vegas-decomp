// Decompiled from classes.dex (SourceFile: MilestoneEntityCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.quest;

public class MilestoneEntityCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public MilestoneEntityCreator()
    {
      super();
    }

    static void a(
            com.google.android.gms.games.quest.MilestoneEntity p0,
            android.os.Parcel p1,
            int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 1, p0.a(), false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.i());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.b());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.e());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.f(), false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 5, p0.d());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.c(), false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.games.quest.MilestoneEntity _typed_createFromParcel(
            android.os.Parcel p0)
    {
      long v1;
      int v2;
      String v3;
      int v4;
      byte[] v5;
      long v6;
      String v7;
      int v8;
      int v9;
      v1 = 0;
      v2 = 0;
      v3 = null;
      v4 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v5 = null;
      v6 = 0;
      v7 = null;
      v8 = 0;
      while ( p0.dataPosition() < v4 )
      {
        v9 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v9) )
        {
          case 1:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v9);
            break;
          case 2:
            v6 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v9);
            break;
          case 3:
            v1 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v9);
            break;
          case 4:
            v5 = com.google.android.gms.common.internal.safeparcel.a.r(p0, v9);
            break;
          case 5:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v9);
            break;
          case 6:
            v3 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v9);
            break;
          case 1000:
            v8 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v9);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v9);
            break;
        }
      }
      if ( p0.dataPosition() != v4 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v4, p0);
      return new com.google.android.gms.games.quest.MilestoneEntity(v8, v7, v6, v1, v5, v2, v3);
    }

    private static com.google.android.gms.games.quest.MilestoneEntity[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.games.quest.MilestoneEntity[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      long v2;
      int v3;
      String v4;
      int v5;
      long v6;
      byte[] v7;
      String v8;
      int v9;
      int v10;
      v2 = 0;
      v3 = 0;
      v4 = null;
      v5 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v6 = 0;
      v7 = null;
      v8 = null;
      v9 = 0;
      while ( p0.dataPosition() < v5 )
      {
        v10 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v10) )
        {
          case 1:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v10);
            break;
          case 2:
            v6 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v10);
            break;
          case 3:
            v2 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v10);
            break;
          case 4:
            v7 = com.google.android.gms.common.internal.safeparcel.a.r(p0, v10);
            break;
          case 5:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v10);
            break;
          case 6:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v10);
            break;
          case 1000:
            v9 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v10);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v10);
            break;
        }
      }
      if ( p0.dataPosition() != v5 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v5, p0);
      return new com.google.android.gms.games.quest.MilestoneEntity(v9, v8, v6, v2, v7, v3, v4);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.games.quest.MilestoneEntity[p0];
    }

}
