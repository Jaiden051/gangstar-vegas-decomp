// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.query.internal;

public class d implements android.os.Parcelable.Creator {
    // Methods
    public d()
    {
      super();
    }

    static void a(com.google.android.gms.drive.query.internal.FilterHolder p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 1, (android.os.Parcelable)p0.b, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, (android.os.Parcelable)p0.c, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, (android.os.Parcelable)p0.d, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, (android.os.Parcelable)p0.e, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, (android.os.Parcelable)p0.f, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, (android.os.Parcelable)p0.g, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, (android.os.Parcelable)p0.h, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.drive.query.internal.FilterHolder aI(android.os.Parcel p0)
    {
      com.google.android.gms.drive.query.internal.HasFilter v1;
      int v2;
      int v3;
      com.google.android.gms.drive.query.internal.MatchAllFilter v4;
      com.google.android.gms.drive.query.internal.InFilter v5;
      com.google.android.gms.drive.query.internal.NotFilter v6;
      com.google.android.gms.drive.query.internal.LogicalFilter v7;
      com.google.android.gms.drive.query.internal.FieldOnlyFilter v8;
      com.google.android.gms.drive.query.internal.ComparisonFilter v9;
      int v10;
      v1 = null;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = null;
      v9 = null;
      while ( p0.dataPosition() < v2 )
      {
        v10 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v10) )
        {
          case 1:
            v9 = (com.google.android.gms.drive.query.internal.ComparisonFilter)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                                 v10,
                                                                                 (android.os.Parcelable.Creator)ComparisonFilter.CREATOR);
            break;
          case 2:
            v8 = (com.google.android.gms.drive.query.internal.FieldOnlyFilter)com.google.android.gms.common.internal.safeparcel.a.a(p0, v10, FieldOnlyFilter.CREATOR);
            break;
          case 3:
            v7 = (com.google.android.gms.drive.query.internal.LogicalFilter)com.google.android.gms.common.internal.safeparcel.a.a(p0, v10, LogicalFilter.CREATOR);
            break;
          case 4:
            v6 = (com.google.android.gms.drive.query.internal.NotFilter)com.google.android.gms.common.internal.safeparcel.a.a(p0, v10, NotFilter.CREATOR);
            break;
          case 5:
            v5 = (com.google.android.gms.drive.query.internal.InFilter)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                         v10,
                                                                         (android.os.Parcelable.Creator)InFilter.CREATOR);
            break;
          case 6:
            v4 = (com.google.android.gms.drive.query.internal.MatchAllFilter)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                               v10,
                                                                               (android.os.Parcelable.Creator)MatchAllFilter.CREATOR);
            break;
          case 7:
            v1 = (com.google.android.gms.drive.query.internal.HasFilter)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                          v10,
                                                                          (android.os.Parcelable.Creator)HasFilter.CREATOR);
            break;
          case 1000:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v10);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v10);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.drive.query.internal.FilterHolder(v3, v9, v8, v7, v6, v5, v4, v1);
    }

    private static com.google.android.gms.drive.query.internal.FilterHolder[] bE(int p0)
    {
      return new com.google.android.gms.drive.query.internal.FilterHolder[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      com.google.android.gms.drive.query.internal.HasFilter v2;
      int v3;
      int v4;
      com.google.android.gms.drive.query.internal.MatchAllFilter v5;
      com.google.android.gms.drive.query.internal.InFilter v6;
      com.google.android.gms.drive.query.internal.NotFilter v7;
      com.google.android.gms.drive.query.internal.LogicalFilter v8;
      com.google.android.gms.drive.query.internal.FieldOnlyFilter v9;
      com.google.android.gms.drive.query.internal.ComparisonFilter v10;
      int v11;
      v2 = null;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = 0;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = null;
      v9 = null;
      v10 = null;
      while ( p0.dataPosition() < v3 )
      {
        v11 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v11) )
        {
          case 1:
            v10 = (com.google.android.gms.drive.query.internal.ComparisonFilter)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                                  v11,
                                                                                  (android.os.Parcelable.Creator)ComparisonFilter.CREATOR);
            break;
          case 2:
            v9 = (com.google.android.gms.drive.query.internal.FieldOnlyFilter)com.google.android.gms.common.internal.safeparcel.a.a(p0, v11, FieldOnlyFilter.CREATOR);
            break;
          case 3:
            v8 = (com.google.android.gms.drive.query.internal.LogicalFilter)com.google.android.gms.common.internal.safeparcel.a.a(p0, v11, LogicalFilter.CREATOR);
            break;
          case 4:
            v7 = (com.google.android.gms.drive.query.internal.NotFilter)com.google.android.gms.common.internal.safeparcel.a.a(p0, v11, NotFilter.CREATOR);
            break;
          case 5:
            v6 = (com.google.android.gms.drive.query.internal.InFilter)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                         v11,
                                                                         (android.os.Parcelable.Creator)InFilter.CREATOR);
            break;
          case 6:
            v5 = (com.google.android.gms.drive.query.internal.MatchAllFilter)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                               v11,
                                                                               (android.os.Parcelable.Creator)MatchAllFilter.CREATOR);
            break;
          case 7:
            v2 = (com.google.android.gms.drive.query.internal.HasFilter)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                          v11,
                                                                          (android.os.Parcelable.Creator)HasFilter.CREATOR);
            break;
          case 1000:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v11);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v11);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.drive.query.internal.FilterHolder(v4, v10, v9, v8, v7, v6, v5, v2);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.drive.query.internal.FilterHolder[p0];
    }

}
