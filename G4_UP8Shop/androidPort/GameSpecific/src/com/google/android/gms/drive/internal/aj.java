// Decompiled from classes.dex (SourceFile: aj.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import com.google.android.gms.drive.events.ChangeEvent;
import com.google.android.gms.drive.events.FileConflictEvent;
public class aj implements android.os.Parcelable.Creator {
    // Methods
    public aj()
    {
      super();
    }

    static void a(com.google.android.gms.drive.internal.OnEventResponse p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 2, p0.b);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, (android.os.Parcelable)p0.c, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, (android.os.Parcelable)p0.d, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.drive.internal.OnEventResponse ak(android.os.Parcel p0)
    {
      int v1;
      com.google.android.gms.drive.events.ChangeEvent v2;
      int v3;
      int v4;
      com.google.android.gms.drive.events.FileConflictEvent v5;
      int v6;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = null;
      v3 = 0;
      v4 = 0;
      v5 = null;
      while ( p0.dataPosition() < v1 )
      {
        v6 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v6) )
        {
          case 1:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          case 2:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          case 3:
            v2 = (com.google.android.gms.drive.events.ChangeEvent)com.google.android.gms.common.internal.safeparcel.a.a(p0, v6, ChangeEvent.CREATOR);
            break;
          case 4:
            v5 = (com.google.android.gms.drive.events.FileConflictEvent)com.google.android.gms.common.internal.safeparcel.a.a(p0, v6, FileConflictEvent.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v6);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.drive.internal.OnEventResponse(v4, v3, v2, v5);
    }

    private static com.google.android.gms.drive.internal.OnEventResponse[] bg(int p0)
    {
      return new com.google.android.gms.drive.internal.OnEventResponse[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      com.google.android.gms.drive.events.ChangeEvent v3;
      int v4;
      int v5;
      com.google.android.gms.drive.events.FileConflictEvent v6;
      int v7;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = null;
      v4 = 0;
      v5 = 0;
      v6 = null;
      while ( p0.dataPosition() < v2 )
      {
        v7 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v7) )
        {
          case 1:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          case 2:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          case 3:
            v3 = (com.google.android.gms.drive.events.ChangeEvent)com.google.android.gms.common.internal.safeparcel.a.a(p0, v7, ChangeEvent.CREATOR);
            break;
          case 4:
            v6 = (com.google.android.gms.drive.events.FileConflictEvent)com.google.android.gms.common.internal.safeparcel.a.a(p0, v7, FileConflictEvent.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v7);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.drive.internal.OnEventResponse(v5, v4, v3, v6);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.drive.internal.OnEventResponse[p0];
    }

}
