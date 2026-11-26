// Decompiled from classes.dex (SourceFile: IGamesService$Stub$Proxy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.os.Parcel;
import android.os.ParcelFileDescriptor;
import com.google.android.gms.games.multiplayer.realtime.RoomEntity;
class IGamesService$Stub$Proxy implements com.google.android.gms.games.internal.IGamesService {
    // Fields
    private android.os.IBinder a;

    // Methods
    IGamesService$Stub$Proxy(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final int a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            byte[] p1,
            String p2,
            String p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      int result; // RETVAL
    
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeByteArray(p1);
        v5.writeString(p2);
        v5.writeString(p3);
        this.a.transact(5033, v5, v7, 0);
        v7.readException();
        result = v7.readInt();
      }
      catch ( Throwable v10 )
      {
        v6.recycle();
        v5.recycle();
        throw v10;
      }
      v7.recycle();
      v5.recycle();
      return result;
    }

    public final int a(byte[] p0, String p1, String[] p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      int result; // RETVAL
    
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v4.writeByteArray(p0);
        v4.writeString(p1);
        v4.writeStringArray(p2);
        this.a.transact(5034, v4, v5, 0);
        v6.readException();
        result = v6.readInt();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
      return result;
    }

    public final android.content.Intent a(int p0, int p1, boolean p2)
 throws android.os.RemoteException {
      int v4;
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.content.Intent v8;
      v4 = 0;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v5.writeInt(p0);
        v5.writeInt(p1);
        v5.writeInt(com.gameloft.android.DecompRT.b2i(p2));
        this.a.transact(9008, v5, v6, 0);
        v7.readException();
        if ( v7.readInt() != 0 )
          v8 = (android.content.Intent)android.content.Intent.CREATOR.createFromParcel(v7);
        else
          v8 = null;
      }
      catch ( Throwable v10 )
      {
        v6.recycle();
        v5.recycle();
        throw v10;
      }
      v7.recycle();
      v5.recycle();
      return v8;
    }

    public final android.content.Intent a(int p0, byte[] p1, int p2, String p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.content.Intent v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v5.writeInt(p0);
        v5.writeByteArray(p1);
        v5.writeInt(p2);
        v5.writeString(p3);
        this.a.transact(10012, v5, v6, 0);
        v7.readException();
        if ( v7.readInt() != 0 )
          v8 = (android.content.Intent)android.content.Intent.CREATOR.createFromParcel(v7);
        else
          v8 = null;
      }
      catch ( Throwable v10 )
      {
        v6.recycle();
        v5.recycle();
        throw v10;
      }
      v7.recycle();
      v5.recycle();
      return v8;
    }

    public final android.content.Intent a(
            com.google.android.gms.games.internal.multiplayer.ZInvitationCluster p0,
            String p1,
            String p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.content.Intent v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
        {
          v4.writeInt(1);
          p0.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        v4.writeString(p1);
        v4.writeString(p2);
        this.a.transact(10021, v4, v5, 0);
        v6.readException();
        if ( v6.readInt() != 0 )
          v7 = (android.content.Intent)android.content.Intent.CREATOR.createFromParcel(v6);
        else
          v7 = null;
        v6.recycle();
        v4.recycle();
        return v7;
      }
      catch ( Throwable v9 )
      {
        v5.recycle();
        v4.recycle();
        throw v9;
      }
    }

    public final android.content.Intent a(
            com.google.android.gms.games.internal.request.GameRequestCluster p0,
            String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.content.Intent v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
        {
          v3.writeInt(1);
          p0.writeToParcel(v3, 0);
        }
        else
        {
          v3.writeInt(0);
        }
        v3.writeString(p1);
        this.a.transact(10022, v3, v4, 0);
        v5.readException();
        if ( v5.readInt() != 0 )
          v6 = (android.content.Intent)android.content.Intent.CREATOR.createFromParcel(v5);
        else
          v6 = null;
        v5.recycle();
        v3.recycle();
        return v6;
      }
      catch ( Throwable v8 )
      {
        v4.recycle();
        v3.recycle();
        throw v8;
      }
    }

    public final android.content.Intent a(
            com.google.android.gms.games.multiplayer.realtime.RoomEntity p0,
            int p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.content.Intent v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
        {
          v3.writeInt(1);
          p0.writeToParcel(v3, 0);
        }
        else
        {
          v3.writeInt(0);
        }
        v3.writeInt(p1);
        this.a.transact(9011, v3, v4, 0);
        v5.readException();
        if ( v5.readInt() != 0 )
          v6 = (android.content.Intent)android.content.Intent.CREATOR.createFromParcel(v5);
        else
          v6 = null;
        v5.recycle();
        v3.recycle();
        return v6;
      }
      catch ( Throwable v8 )
      {
        v4.recycle();
        v3.recycle();
        throw v8;
      }
    }

    public final android.content.Intent a(String p0, boolean p1, boolean p2, int p3)
 throws android.os.RemoteException {
      int v5;
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.content.Intent v9;
      v5 = 1;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v6.writeString(p0);
        v6.writeInt(com.gameloft.android.DecompRT.b2i(p1));
        v6.writeInt(com.gameloft.android.DecompRT.b2i(p2));
        v6.writeInt(p3);
        this.a.transact(12001, v6, v7, 0);
        v8.readException();
        if ( v8.readInt() != 0 )
          v9 = (android.content.Intent)android.content.Intent.CREATOR.createFromParcel(v8);
        else
          v9 = null;
      }
      catch ( Throwable v11 )
      {
        v7.recycle();
        v6.recycle();
        throw v11;
      }
      v8.recycle();
      v6.recycle();
      return v9;
    }

    public final android.content.Intent a(int[] p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.content.Intent v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v2.writeIntArray(p0);
        this.a.transact(12030, v2, v3, 0);
        v4.readException();
        if ( v4.readInt() != 0 )
          v5 = (android.content.Intent)android.content.Intent.CREATOR.createFromParcel(v4);
        else
          v5 = null;
      }
      catch ( Throwable v7 )
      {
        v3.recycle();
        v2.recycle();
        throw v7;
      }
      v4.recycle();
      v2.recycle();
      return v5;
    }

    public final android.content.Intent a(
            com.google.android.gms.games.multiplayer.ParticipantEntity[] p0,
            String p1,
            String p2,
            android.net.Uri p3,
            android.net.Uri p4)
 throws android.os.RemoteException {
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.content.Intent v9;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v6.writeTypedArray((android.os.Parcelable[])p0, 0);
        v6.writeString(p1);
        v6.writeString(p2);
        if ( p3 != null )
        {
          v6.writeInt(1);
          p3.writeToParcel(v6, 0);
        }
        else
        {
          v6.writeInt(0);
        }
        if ( p4 != null )
        {
          v6.writeInt(1);
          p4.writeToParcel(v6, 0);
        }
        else
        {
          v6.writeInt(0);
        }
        this.a.transact(9031, v6, v7, 0);
        v8.readException();
        if ( v8.readInt() != 0 )
          v9 = (android.content.Intent)android.content.Intent.CREATOR.createFromParcel(v8);
        else
          v9 = null;
        v8.recycle();
        v6.recycle();
        return v9;
      }
      catch ( Throwable v11 )
      {
        v7.recycle();
        v6.recycle();
        throw v11;
      }
    }

    public final android.os.ParcelFileDescriptor a(android.net.Uri p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.os.ParcelFileDescriptor v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
        {
          v2.writeInt(1);
          p0.writeToParcel(v2, 0);
        }
        else
        {
          v2.writeInt(0);
        }
        this.a.transact(6507, v2, v3, 0);
        v4.readException();
        if ( v4.readInt() != 0 )
          v5 = (android.os.ParcelFileDescriptor)android.os.ParcelFileDescriptor.CREATOR.createFromParcel(v4);
        else
          v5 = null;
        v4.recycle();
        v2.recycle();
        return v5;
      }
      catch ( Throwable v7 )
      {
        v3.recycle();
        v2.recycle();
        throw v7;
      }
    }

    public final String a()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      String result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(5003, v1, v2, 0);
        v3.readException();
        result = v3.readString();
      }
      catch ( Throwable v5 )
      {
        v2.recycle();
        v1.recycle();
        throw v5;
      }
      v3.recycle();
      v1.recycle();
      return result;
    }

    public final String a(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      String result; // RETVAL
    
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v2.writeString(p0);
        this.a.transact(5064, v2, v3, 0);
        v4.readException();
        result = v4.readString();
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
      v4.recycle();
      v2.recycle();
      return result;
    }

    public final void a(int p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v2.writeInt(p0);
        this.a.transact(5036, v2, v3, 0);
        v4.readException();
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void a(long p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v2.writeLong(p0);
        this.a.transact(5001, v2, v3, 0);
        v4.readException();
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void a(long p0, String p2)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v3.writeLong(p0);
        v3.writeString(p2);
        this.a.transact(8019, v3, v4, 0);
        v5.readException();
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void a(android.os.IBinder p0, android.os.Bundle p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v3.writeStrongBinder(p0);
        if ( p1 != null )
        {
          v3.writeInt(1);
          p1.writeToParcel(v3, 0);
        }
        else
        {
          v3.writeInt(0);
        }
        this.a.transact(5005, v3, v4, 0);
        v5.readException();
        v5.recycle();
        v3.recycle();
        return;
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
    }

    public final void a(com.google.android.gms.drive.Contents p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
        {
          v2.writeInt(1);
          p0.writeToParcel(v2, 0);
        }
        else
        {
          v2.writeInt(0);
        }
        this.a.transact(12019, v2, v3, 0);
        v4.readException();
        v4.recycle();
        v2.recycle();
        return;
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
    }

    public final void a(com.google.android.gms.games.internal.IGamesCallbacks p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.os.IBinder v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(5002, v2, v4, 0);
        v4.readException();
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void a(com.google.android.gms.games.internal.IGamesCallbacks p0, int p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeInt(p1);
        this.a.transact(10016, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            int p1,
            int p2,
            int p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeInt(p1);
        v5.writeInt(p2);
        v5.writeInt(p3);
        this.a.transact(10009, v5, v7, 0);
        v7.readException();
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
      v7.recycle();
      v5.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            int p1,
            int p2,
            boolean p3,
            boolean p4)
 throws android.os.RemoteException {
      int v6;
      android.os.Parcel v7;
      android.os.Parcel v8; // RETVAL
      android.os.Parcel v9;
      android.os.IBinder v10;
      v6 = 1;
      v7 = Parcel.obtain();
      v8 = Parcel.obtain();
      v9 = v8;
      try
      {
        v7.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v10 = p0.asBinder();
        else
          v10 = null;
        v7.writeStrongBinder(v10);
        v7.writeInt(p1);
        v7.writeInt(p2);
        v7.writeInt(com.gameloft.android.DecompRT.b2i(p3));
        if ( !p4 )
          v6 = 0;
        v7.writeInt(v6);
        this.a.transact(5044, v7, v9, 0);
        v9.readException();
      }
      catch ( Throwable v11 )
      {
        v8.recycle();
        v7.recycle();
        throw v11;
      }
      v9.recycle();
      v7.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            int p1,
            int p2,
            String[] p3,
            android.os.Bundle p4)
 throws android.os.RemoteException {
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeInt(p1);
        v6.writeInt(p2);
        v6.writeStringArray(p3);
        if ( p4 != null )
        {
          v6.writeInt(1);
          p4.writeToParcel(v6, 0);
        }
        else
        {
          v6.writeInt(0);
        }
        this.a.transact(8004, v6, v8, 0);
        v8.readException();
        v8.recycle();
        v6.recycle();
        return;
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            int p1,
            boolean p2,
            boolean p3)
 throws android.os.RemoteException {
      int v5;
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v5 = 1;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeInt(p1);
        v6.writeInt(com.gameloft.android.DecompRT.b2i(p2));
        if ( !p3 )
          v5 = 0;
        v6.writeInt(v5);
        this.a.transact(5015, v6, v8, 0);
        v8.readException();
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
      v8.recycle();
      v6.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            int p1,
            int[] p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeInt(p1);
        v4.writeIntArray(p2);
        this.a.transact(10018, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void a(com.google.android.gms.games.internal.IGamesCallbacks p0, long p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeLong(p1);
        this.a.transact(5058, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            long p1,
            String p3)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeLong(p1);
        v4.writeString(p3);
        this.a.transact(8018, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            android.os.Bundle p1,
            int p2,
            int p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        if ( p1 != null )
        {
          v5.writeInt(1);
          p1.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        v5.writeInt(p2);
        v5.writeInt(p3);
        this.a.transact(5021, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            android.os.IBinder p1,
            int p2,
            String[] p3,
            android.os.Bundle p4,
            boolean p5,
            long p6)
 throws android.os.RemoteException {
      int v8;
      android.os.Parcel v9;
      android.os.Parcel v10; // RETVAL
      android.os.Parcel v11;
      android.os.IBinder v12;
      v8 = 1;
      v9 = Parcel.obtain();
      v10 = Parcel.obtain();
      v11 = v10;
      try
      {
        v9.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v12 = p0.asBinder();
        else
          v12 = null;
        v9.writeStrongBinder(v12);
        v9.writeStrongBinder(p1);
        v9.writeInt(p2);
        v9.writeStringArray(p3);
        if ( p4 != null )
        {
          v9.writeInt(1);
          p4.writeToParcel(v9, 0);
        }
        else
        {
          v9.writeInt(0);
        }
        if ( !p5 )
          v8 = 0;
        v9.writeInt(v8);
        v9.writeLong(p6);
        this.a.transact(5030, v9, v11, 0);
        v11.readException();
        v11.recycle();
        v9.recycle();
        return;
      }
      catch ( Throwable v13 )
      {
        v10.recycle();
        v9.recycle();
        throw v13;
      }
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            android.os.IBinder p1,
            String p2,
            boolean p3,
            long p4)
 throws android.os.RemoteException {
      int v6;
      android.os.Parcel v7;
      android.os.Parcel v8; // RETVAL
      android.os.Parcel v9;
      android.os.IBinder v10;
      v6 = 0;
      v7 = Parcel.obtain();
      v8 = Parcel.obtain();
      v9 = v8;
      try
      {
        v7.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v10 = p0.asBinder();
        else
          v10 = null;
        v7.writeStrongBinder(v10);
        v7.writeStrongBinder(p1);
        v7.writeString(p2);
        if ( p3 )
          v6 = 1;
        v7.writeInt(v6);
        v7.writeLong(p4);
        this.a.transact(5031, v7, v9, 0);
        v9.readException();
      }
      catch ( Throwable v11 )
      {
        v8.recycle();
        v7.recycle();
        throw v11;
      }
      v9.recycle();
      v7.recycle();
    }

    public final void a(com.google.android.gms.games.internal.IGamesCallbacks p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeString(p1);
        this.a.transact(5014, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            int p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeString(p1);
        v4.writeInt(p2);
        this.a.transact(10011, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            int p2,
            int p3,
            int p4,
            boolean p5)
 throws android.os.RemoteException {
      int v7;
      android.os.Parcel v8;
      android.os.Parcel v9; // RETVAL
      android.os.Parcel v10;
      android.os.IBinder v11;
      v7 = 0;
      v8 = Parcel.obtain();
      v9 = Parcel.obtain();
      v10 = v9;
      try
      {
        v8.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v11 = p0.asBinder();
        else
          v11 = null;
        v8.writeStrongBinder(v11);
        v8.writeString(p1);
        v8.writeInt(p2);
        v8.writeInt(p3);
        v8.writeInt(p4);
        if ( p5 )
          v7 = 1;
        v8.writeInt(v7);
        this.a.transact(5019, v8, v10, 0);
        v10.readException();
      }
      catch ( Throwable v12 )
      {
        v9.recycle();
        v8.recycle();
        throw v12;
      }
      v10.recycle();
      v8.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            int p2,
            android.os.IBinder p3,
            android.os.Bundle p4)
 throws android.os.RemoteException {
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeString(p1);
        v6.writeInt(p2);
        v6.writeStrongBinder(p3);
        if ( p4 != null )
        {
          v6.writeInt(1);
          p4.writeToParcel(v6, 0);
        }
        else
        {
          v6.writeInt(0);
        }
        this.a.transact(5025, v6, v8, 0);
        v8.readException();
        v8.recycle();
        v6.recycle();
        return;
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            int p2,
            boolean p3)
 throws android.os.RemoteException {
      int v5;
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v5 = 0;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeString(p1);
        v6.writeInt(p2);
        if ( p3 )
          v5 = 1;
        v6.writeInt(v5);
        this.a.transact(8023, v6, v8, 0);
        v8.readException();
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
      v8.recycle();
      v6.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            int p2,
            boolean p3,
            boolean p4)
 throws android.os.RemoteException {
      int v6;
      android.os.Parcel v7;
      android.os.Parcel v8; // RETVAL
      android.os.Parcel v9;
      android.os.IBinder v10;
      v6 = 1;
      v7 = Parcel.obtain();
      v8 = Parcel.obtain();
      v9 = v8;
      try
      {
        v7.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v10 = p0.asBinder();
        else
          v10 = null;
        v7.writeStrongBinder(v10);
        v7.writeString(p1);
        v7.writeInt(p2);
        v7.writeInt(com.gameloft.android.DecompRT.b2i(p3));
        if ( !p4 )
          v6 = 0;
        v7.writeInt(v6);
        this.a.transact(5045, v7, v9, 0);
        v9.readException();
      }
      catch ( Throwable v11 )
      {
        v8.recycle();
        v7.recycle();
        throw v11;
      }
      v9.recycle();
      v7.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            int p2,
            boolean p3,
            boolean p4,
            boolean p5,
            boolean p6)
 throws android.os.RemoteException {
      int v8;
      android.os.Parcel v9;
      android.os.Parcel v10; // RETVAL
      android.os.Parcel v11;
      android.os.IBinder v12;
      v8 = 1;
      v9 = Parcel.obtain();
      v10 = Parcel.obtain();
      v11 = v10;
      try
      {
        v9.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v12 = p0.asBinder();
        else
          v12 = null;
        v9.writeStrongBinder(v12);
        v9.writeString(p1);
        v9.writeInt(p2);
        v9.writeInt(com.gameloft.android.DecompRT.b2i(p3));
        v9.writeInt(com.gameloft.android.DecompRT.b2i(p4));
        v9.writeInt(com.gameloft.android.DecompRT.b2i(p5));
        if ( !p6 )
          v8 = 0;
        v9.writeInt(v8);
        this.a.transact(6501, v9, v11, 0);
        v11.readException();
      }
      catch ( Throwable v13 )
      {
        v10.recycle();
        v9.recycle();
        throw v13;
      }
      v11.recycle();
      v9.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            int p2,
            int[] p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeString(p1);
        v5.writeInt(p2);
        v5.writeIntArray(p3);
        this.a.transact(10019, v5, v7, 0);
        v7.readException();
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
      v7.recycle();
      v5.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            long p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeString(p1);
        v4.writeLong(p2);
        this.a.transact(5016, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            long p2,
            String p4)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeString(p1);
        v5.writeLong(p2);
        v5.writeString(p4);
        this.a.transact(7002, v5, v7, 0);
        v7.readException();
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
      v7.recycle();
      v5.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            android.os.IBinder p2,
            android.os.Bundle p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeString(p1);
        v5.writeStrongBinder(p2);
        if ( p3 != null )
        {
          v5.writeInt(1);
          p3.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        this.a.transact(5023, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            com.google.android.gms.games.snapshot.SnapshotMetadataChange p2,
            com.google.android.gms.drive.Contents p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeString(p1);
        if ( p2 != null )
        {
          v5.writeInt(1);
          p2.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        if ( p3 != null )
        {
          v5.writeInt(1);
          p3.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        this.a.transact(12007, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            String p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeString(p1);
        v4.writeString(p2);
        this.a.transact(5038, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            String p2,
            int p3,
            int p4)
 throws android.os.RemoteException {
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeString(p1);
        v6.writeString(p2);
        v6.writeInt(p3);
        v6.writeInt(p4);
        this.a.transact(8001, v6, v8, 0);
        v8.readException();
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
      v8.recycle();
      v6.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            String p2,
            int p3,
            int p4,
            int p5)
 throws android.os.RemoteException {
      android.os.Parcel v7;
      android.os.Parcel v8; // RETVAL
      android.os.Parcel v9;
      android.os.IBinder v10;
      v7 = Parcel.obtain();
      v8 = Parcel.obtain();
      v9 = v8;
      try
      {
        v7.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v10 = p0.asBinder();
        else
          v10 = null;
        v7.writeStrongBinder(v10);
        v7.writeString(p1);
        v7.writeString(p2);
        v7.writeInt(p3);
        v7.writeInt(p4);
        v7.writeInt(p5);
        this.a.transact(10010, v7, v9, 0);
        v9.readException();
      }
      catch ( Throwable v11 )
      {
        v8.recycle();
        v7.recycle();
        throw v11;
      }
      v9.recycle();
      v7.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            String p2,
            int p3,
            int p4,
            int p5,
            boolean p6)
 throws android.os.RemoteException {
      int v8;
      android.os.Parcel v9;
      android.os.Parcel v10; // RETVAL
      android.os.Parcel v11;
      android.os.IBinder v12;
      v8 = 0;
      v9 = Parcel.obtain();
      v10 = Parcel.obtain();
      v11 = v10;
      try
      {
        v9.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v12 = p0.asBinder();
        else
          v12 = null;
        v9.writeStrongBinder(v12);
        v9.writeString(p1);
        v9.writeString(p2);
        v9.writeInt(p3);
        v9.writeInt(p4);
        v9.writeInt(p5);
        if ( p6 )
          v8 = 1;
        v9.writeInt(v8);
        this.a.transact(5039, v9, v11, 0);
        v11.readException();
      }
      catch ( Throwable v13 )
      {
        v10.recycle();
        v9.recycle();
        throw v13;
      }
      v11.recycle();
      v9.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            String p2,
            int p3,
            boolean p4,
            boolean p5)
 throws android.os.RemoteException {
      int v7;
      android.os.Parcel v8;
      android.os.Parcel v9; // RETVAL
      android.os.Parcel v10;
      android.os.IBinder v11;
      v7 = 1;
      v8 = Parcel.obtain();
      v9 = Parcel.obtain();
      v10 = v9;
      try
      {
        v8.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v11 = p0.asBinder();
        else
          v11 = null;
        v8.writeStrongBinder(v11);
        v8.writeString(p1);
        v8.writeString(p2);
        v8.writeInt(p3);
        v8.writeInt(com.gameloft.android.DecompRT.b2i(p4));
        if ( !p5 )
          v7 = 0;
        v8.writeInt(v7);
        this.a.transact(9028, v8, v10, 0);
        v10.readException();
      }
      catch ( Throwable v12 )
      {
        v9.recycle();
        v8.recycle();
        throw v12;
      }
      v10.recycle();
      v8.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            String p2,
            com.google.android.gms.games.snapshot.SnapshotMetadataChange p3,
            com.google.android.gms.drive.Contents p4)
 throws android.os.RemoteException {
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeString(p1);
        v6.writeString(p2);
        if ( p3 != null )
        {
          v6.writeInt(1);
          p3.writeToParcel(v6, 0);
        }
        else
        {
          v6.writeInt(0);
        }
        if ( p4 != null )
        {
          v6.writeInt(1);
          p4.writeToParcel(v6, 0);
        }
        else
        {
          v6.writeInt(0);
        }
        this.a.transact(12033, v6, v8, 0);
        v8.readException();
        v8.recycle();
        v6.recycle();
        return;
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            String p2,
            boolean p3)
 throws android.os.RemoteException {
      int v5;
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v5 = 0;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeString(p1);
        v6.writeString(p2);
        if ( p3 )
          v5 = 1;
        v6.writeInt(v5);
        this.a.transact(6002, v6, v8, 0);
        v8.readException();
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
      v8.recycle();
      v6.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            String p2,
            int[] p3,
            int p4,
            boolean p5)
 throws android.os.RemoteException {
      int v7;
      android.os.Parcel v8;
      android.os.Parcel v9; // RETVAL
      android.os.Parcel v10;
      android.os.IBinder v11;
      v7 = 0;
      v8 = Parcel.obtain();
      v9 = Parcel.obtain();
      v10 = v9;
      try
      {
        v8.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v11 = p0.asBinder();
        else
          v11 = null;
        v8.writeStrongBinder(v11);
        v8.writeString(p1);
        v8.writeString(p2);
        v8.writeIntArray(p3);
        v8.writeInt(p4);
        if ( p5 )
          v7 = 1;
        v8.writeInt(v7);
        this.a.transact(12015, v8, v10, 0);
        v10.readException();
      }
      catch ( Throwable v12 )
      {
        v9.recycle();
        v8.recycle();
        throw v12;
      }
      v10.recycle();
      v8.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            String p2,
            String[] p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeString(p1);
        v5.writeString(p2);
        v5.writeStringArray(p3);
        this.a.transact(10008, v5, v7, 0);
        v7.readException();
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
      v7.recycle();
      v5.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            String p2,
            String[] p3,
            boolean p4)
 throws android.os.RemoteException {
      int v6;
      android.os.Parcel v7;
      android.os.Parcel v8; // RETVAL
      android.os.Parcel v9;
      android.os.IBinder v10;
      v6 = 0;
      v7 = Parcel.obtain();
      v8 = Parcel.obtain();
      v9 = v8;
      try
      {
        v7.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v10 = p0.asBinder();
        else
          v10 = null;
        v7.writeStrongBinder(v10);
        v7.writeString(p1);
        v7.writeString(p2);
        v7.writeStringArray(p3);
        if ( p4 )
          v6 = 1;
        v7.writeInt(v6);
        this.a.transact(12028, v7, v9, 0);
        v9.readException();
      }
      catch ( Throwable v11 )
      {
        v8.recycle();
        v7.recycle();
        throw v11;
      }
      v9.recycle();
      v7.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            boolean p2)
 throws android.os.RemoteException {
      int v4;
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v4 = 0;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeString(p1);
        if ( p2 )
          v4 = 1;
        v5.writeInt(v4);
        this.a.transact(5054, v5, v7, 0);
        v7.readException();
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
      v7.recycle();
      v5.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            byte[] p2,
            String p3,
            com.google.android.gms.games.multiplayer.ParticipantResult[] p4)
 throws android.os.RemoteException {
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeString(p1);
        v6.writeByteArray(p2);
        v6.writeString(p3);
        v6.writeTypedArray((android.os.Parcelable[])p4, 0);
        this.a.transact(8007, v6, v8, 0);
        v8.readException();
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
      v8.recycle();
      v6.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            byte[] p2,
            com.google.android.gms.games.multiplayer.ParticipantResult[] p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeString(p1);
        v5.writeByteArray(p2);
        v5.writeTypedArray((android.os.Parcelable[])p3, 0);
        this.a.transact(8008, v5, v7, 0);
        v7.readException();
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
      v7.recycle();
      v5.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            int[] p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeString(p1);
        v4.writeIntArray(p2);
        this.a.transact(8017, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            String[] p2,
            int p3,
            byte[] p4,
            int p5)
 throws android.os.RemoteException {
      android.os.Parcel v7;
      android.os.Parcel v8; // RETVAL
      android.os.Parcel v9;
      android.os.IBinder v10;
      v7 = Parcel.obtain();
      v8 = Parcel.obtain();
      v9 = v8;
      try
      {
        v7.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v10 = p0.asBinder();
        else
          v10 = null;
        v7.writeStrongBinder(v10);
        v7.writeString(p1);
        v7.writeStringArray(p2);
        v7.writeInt(p3);
        v7.writeByteArray(p4);
        v7.writeInt(p5);
        this.a.transact(10005, v7, v9, 0);
        v9.readException();
      }
      catch ( Throwable v11 )
      {
        v8.recycle();
        v7.recycle();
        throw v11;
      }
      v9.recycle();
      v7.recycle();
    }

    public final void a(com.google.android.gms.games.internal.IGamesCallbacks p0, boolean p1)
 throws android.os.RemoteException {
      int v3;
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v3 = 0;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        if ( p1 )
          v3 = 1;
        v4.writeInt(v3);
        this.a.transact(6001, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            boolean p1,
            android.os.Bundle p2)
 throws android.os.RemoteException {
      int v4;
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v4 = 1;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        if ( !p1 )
          v4 = 0;
        v5.writeInt(v4);
        if ( p2 != null )
        {
          v5.writeInt(1);
          p2.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        this.a.transact(5063, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            boolean p1,
            String[] p2)
 throws android.os.RemoteException {
      int v4;
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v4 = 0;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        if ( p1 )
          v4 = 1;
        v5.writeInt(v4);
        v5.writeStringArray(p2);
        this.a.transact(12031, v5, v7, 0);
        v7.readException();
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
      v7.recycle();
      v5.recycle();
    }

    public final void a(com.google.android.gms.games.internal.IGamesCallbacks p0, int[] p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeIntArray(p1);
        this.a.transact(8003, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            int[] p1,
            int p2,
            boolean p3)
 throws android.os.RemoteException {
      int v5;
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v5 = 0;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeIntArray(p1);
        v6.writeInt(p2);
        if ( p3 )
          v5 = 1;
        v6.writeInt(v5);
        this.a.transact(12010, v6, v8, 0);
        v8.readException();
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
      v8.recycle();
      v6.recycle();
    }

    public final void a(com.google.android.gms.games.internal.IGamesCallbacks p0, String[] p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeStringArray(p1);
        this.a.transact(10006, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void a(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String[] p1,
            boolean p2)
 throws android.os.RemoteException {
      int v4;
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v4 = 0;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeStringArray(p1);
        if ( p2 )
          v4 = 1;
        v5.writeInt(v4);
        this.a.transact(12029, v5, v7, 0);
        v7.readException();
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
      v7.recycle();
      v5.recycle();
    }

    public final void a(String p0, int p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v3.writeString(p0);
        v3.writeInt(p1);
        this.a.transact(5028, v3, v4, 0);
        v5.readException();
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void a(String p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v3.writeString(p0);
        v3.writeString(p1);
        this.a.transact(5065, v3, v4, 0);
        v5.readException();
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void a(String p0, String p1, int p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v4.writeString(p0);
        v4.writeString(p1);
        v4.writeInt(p2);
        this.a.transact(5051, v4, v5, 0);
        v6.readException();
      }
      catch ( Throwable v7 )
      {
        v5.recycle();
        v4.recycle();
        throw v7;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void a(boolean p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v2.writeInt(com.gameloft.android.DecompRT.b2i(p0));
        this.a.transact(5068, v2, v3, 0);
        v4.readException();
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
      v4.recycle();
      v2.recycle();
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

    public final android.content.Intent b(int p0, int p1, boolean p2)
 throws android.os.RemoteException {
      int v4;
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.content.Intent v8;
      v4 = 0;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v5.writeInt(p0);
        v5.writeInt(p1);
        v5.writeInt(com.gameloft.android.DecompRT.b2i(p2));
        this.a.transact(9009, v5, v6, 0);
        v7.readException();
        if ( v7.readInt() != 0 )
          v8 = (android.content.Intent)android.content.Intent.CREATOR.createFromParcel(v7);
        else
          v8 = null;
      }
      catch ( Throwable v10 )
      {
        v6.recycle();
        v5.recycle();
        throw v10;
      }
      v7.recycle();
      v5.recycle();
      return v8;
    }

    public final android.os.Bundle b()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      android.os.Bundle v4;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(5004, v1, v2, 0);
        v3.readException();
        if ( v3.readInt() != 0 )
          v4 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(v3);
        else
          v4 = null;
      }
      catch ( Throwable v6 )
      {
        v2.recycle();
        v1.recycle();
        throw v6;
      }
      v3.recycle();
      v1.recycle();
      return v4;
    }

    public final String b(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      String result; // RETVAL
    
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v2.writeString(p0);
        this.a.transact(5035, v2, v3, 0);
        v4.readException();
        result = v4.readString();
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
      v4.recycle();
      v2.recycle();
      return result;
    }

    public final void b(long p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v2.writeLong(p0);
        this.a.transact(5059, v2, v3, 0);
        v4.readException();
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void b(long p0, String p2)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v3.writeLong(p0);
        v3.writeString(p2);
        this.a.transact(8021, v3, v4, 0);
        v5.readException();
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void b(com.google.android.gms.games.internal.IGamesCallbacks p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.os.IBinder v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(5017, v2, v4, 0);
        v4.readException();
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void b(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            int p1,
            boolean p2,
            boolean p3)
 throws android.os.RemoteException {
      int v5;
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v5 = 1;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeInt(p1);
        v6.writeInt(com.gameloft.android.DecompRT.b2i(p2));
        if ( !p3 )
          v5 = 0;
        v6.writeInt(v5);
        this.a.transact(5046, v6, v8, 0);
        v8.readException();
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
      v8.recycle();
      v6.recycle();
    }

    public final void b(com.google.android.gms.games.internal.IGamesCallbacks p0, long p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeLong(p1);
        this.a.transact(8012, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void b(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            long p1,
            String p3)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeLong(p1);
        v4.writeString(p3);
        this.a.transact(8020, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void b(com.google.android.gms.games.internal.IGamesCallbacks p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeString(p1);
        this.a.transact(5018, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void b(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            int p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeString(p1);
        v4.writeInt(p2);
        this.a.transact(12023, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void b(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            int p2,
            int p3,
            int p4,
            boolean p5)
 throws android.os.RemoteException {
      int v7;
      android.os.Parcel v8;
      android.os.Parcel v9; // RETVAL
      android.os.Parcel v10;
      android.os.IBinder v11;
      v7 = 0;
      v8 = Parcel.obtain();
      v9 = Parcel.obtain();
      v10 = v9;
      try
      {
        v8.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v11 = p0.asBinder();
        else
          v11 = null;
        v8.writeStrongBinder(v11);
        v8.writeString(p1);
        v8.writeInt(p2);
        v8.writeInt(p3);
        v8.writeInt(p4);
        if ( p5 )
          v7 = 1;
        v8.writeInt(v7);
        this.a.transact(5020, v8, v10, 0);
        v10.readException();
      }
      catch ( Throwable v12 )
      {
        v9.recycle();
        v8.recycle();
        throw v12;
      }
      v10.recycle();
      v8.recycle();
    }

    public final void b(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            int p2,
            android.os.IBinder p3,
            android.os.Bundle p4)
 throws android.os.RemoteException {
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeString(p1);
        v6.writeInt(p2);
        v6.writeStrongBinder(p3);
        if ( p4 != null )
        {
          v6.writeInt(1);
          p4.writeToParcel(v6, 0);
        }
        else
        {
          v6.writeInt(0);
        }
        this.a.transact(7003, v6, v8, 0);
        v8.readException();
        v8.recycle();
        v6.recycle();
        return;
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
    }

    public final void b(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            int p2,
            boolean p3)
 throws android.os.RemoteException {
      int v5;
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v5 = 0;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeString(p1);
        v6.writeInt(p2);
        if ( p3 )
          v5 = 1;
        v6.writeInt(v5);
        this.a.transact(10017, v6, v8, 0);
        v8.readException();
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
      v8.recycle();
      v6.recycle();
    }

    public final void b(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            int p2,
            boolean p3,
            boolean p4)
 throws android.os.RemoteException {
      int v6;
      android.os.Parcel v7;
      android.os.Parcel v8; // RETVAL
      android.os.Parcel v9;
      android.os.IBinder v10;
      v6 = 1;
      v7 = Parcel.obtain();
      v8 = Parcel.obtain();
      v9 = v8;
      try
      {
        v7.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v10 = p0.asBinder();
        else
          v10 = null;
        v7.writeStrongBinder(v10);
        v7.writeString(p1);
        v7.writeInt(p2);
        v7.writeInt(com.gameloft.android.DecompRT.b2i(p3));
        if ( !p4 )
          v6 = 0;
        v7.writeInt(v6);
        this.a.transact(5501, v7, v9, 0);
        v9.readException();
      }
      catch ( Throwable v11 )
      {
        v8.recycle();
        v7.recycle();
        throw v11;
      }
      v9.recycle();
      v7.recycle();
    }

    public final void b(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            android.os.IBinder p2,
            android.os.Bundle p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeString(p1);
        v5.writeStrongBinder(p2);
        if ( p3 != null )
        {
          v5.writeInt(1);
          p3.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        this.a.transact(5024, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public final void b(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            String p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeString(p1);
        v4.writeString(p2);
        this.a.transact(5041, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void b(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            String p2,
            int p3,
            int p4,
            int p5,
            boolean p6)
 throws android.os.RemoteException {
      int v8;
      android.os.Parcel v9;
      android.os.Parcel v10; // RETVAL
      android.os.Parcel v11;
      android.os.IBinder v12;
      v8 = 0;
      v9 = Parcel.obtain();
      v10 = Parcel.obtain();
      v11 = v10;
      try
      {
        v9.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v12 = p0.asBinder();
        else
          v12 = null;
        v9.writeStrongBinder(v12);
        v9.writeString(p1);
        v9.writeString(p2);
        v9.writeInt(p3);
        v9.writeInt(p4);
        v9.writeInt(p5);
        if ( p6 )
          v8 = 1;
        v9.writeInt(v8);
        this.a.transact(5040, v9, v11, 0);
        v11.readException();
      }
      catch ( Throwable v13 )
      {
        v10.recycle();
        v9.recycle();
        throw v13;
      }
      v11.recycle();
      v9.recycle();
    }

    public final void b(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            String p2,
            int p3,
            boolean p4,
            boolean p5)
 throws android.os.RemoteException {
      int v7;
      android.os.Parcel v8;
      android.os.Parcel v9; // RETVAL
      android.os.Parcel v10;
      android.os.IBinder v11;
      v7 = 1;
      v8 = Parcel.obtain();
      v9 = Parcel.obtain();
      v10 = v9;
      try
      {
        v8.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v11 = p0.asBinder();
        else
          v11 = null;
        v8.writeStrongBinder(v11);
        v8.writeString(p1);
        v8.writeString(p2);
        v8.writeInt(p3);
        v8.writeInt(com.gameloft.android.DecompRT.b2i(p4));
        if ( !p5 )
          v7 = 0;
        v8.writeInt(v7);
        this.a.transact(12018, v8, v10, 0);
        v10.readException();
      }
      catch ( Throwable v12 )
      {
        v9.recycle();
        v8.recycle();
        throw v12;
      }
      v10.recycle();
      v8.recycle();
    }

    public final void b(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            String p2,
            boolean p3)
 throws android.os.RemoteException {
      int v5;
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v5 = 0;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeString(p1);
        v6.writeString(p2);
        if ( p3 )
          v5 = 1;
        v6.writeInt(v5);
        this.a.transact(6506, v6, v8, 0);
        v8.readException();
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
      v8.recycle();
      v6.recycle();
    }

    public final void b(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            boolean p2)
 throws android.os.RemoteException {
      int v4;
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v4 = 0;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeString(p1);
        if ( p2 )
          v4 = 1;
        v5.writeInt(v4);
        this.a.transact(6502, v5, v7, 0);
        v7.readException();
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
      v7.recycle();
      v5.recycle();
    }

    public final void b(com.google.android.gms.games.internal.IGamesCallbacks p0, boolean p1)
 throws android.os.RemoteException {
      int v3;
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v3 = 0;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        if ( p1 )
          v3 = 1;
        v4.writeInt(v3);
        this.a.transact(6503, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void b(com.google.android.gms.games.internal.IGamesCallbacks p0, String[] p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeStringArray(p1);
        this.a.transact(10007, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void b(String p0, int p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v3.writeString(p0);
        v3.writeInt(p1);
        this.a.transact(5029, v3, v4, 0);
        v5.readException();
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void b(String p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v3.writeString(p0);
        v3.writeString(p1);
        this.a.transact(8025, v3, v4, 0);
        v5.readException();
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void b(String p0, String p1, int p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v4.writeString(p0);
        v4.writeString(p1);
        v4.writeInt(p2);
        this.a.transact(8026, v4, v5, 0);
        v6.readException();
      }
      catch ( Throwable v7 )
      {
        v5.recycle();
        v4.recycle();
        throw v7;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void b(boolean p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v2.writeInt(com.gameloft.android.DecompRT.b2i(p0));
        this.a.transact(12026, v2, v3, 0);
        v4.readException();
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void c()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(5006, v1, v2, 0);
        v3.readException();
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        v1.recycle();
        throw v4;
      }
      v3.recycle();
      v1.recycle();
    }

    public final void c(long p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v2.writeLong(p0);
        this.a.transact(8013, v2, v3, 0);
        v4.readException();
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void c(long p0, String p2)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v3.writeLong(p0);
        v3.writeString(p2);
        this.a.transact(10004, v3, v4, 0);
        v5.readException();
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void c(com.google.android.gms.games.internal.IGamesCallbacks p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.os.IBinder v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(5022, v2, v4, 0);
        v4.readException();
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void c(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            int p1,
            boolean p2,
            boolean p3)
 throws android.os.RemoteException {
      int v5;
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v5 = 1;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeInt(p1);
        v6.writeInt(com.gameloft.android.DecompRT.b2i(p2));
        if ( !p3 )
          v5 = 0;
        v6.writeInt(v5);
        this.a.transact(5048, v6, v8, 0);
        v8.readException();
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
      v8.recycle();
      v6.recycle();
    }

    public final void c(com.google.android.gms.games.internal.IGamesCallbacks p0, long p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeLong(p1);
        this.a.transact(10001, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void c(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            long p1,
            String p3)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeLong(p1);
        v4.writeString(p3);
        this.a.transact(10003, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void c(com.google.android.gms.games.internal.IGamesCallbacks p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeString(p1);
        this.a.transact(5032, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void c(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            int p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeString(p1);
        v4.writeInt(p2);
        this.a.transact(12024, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void c(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            int p2,
            boolean p3,
            boolean p4)
 throws android.os.RemoteException {
      int v6;
      android.os.Parcel v7;
      android.os.Parcel v8; // RETVAL
      android.os.Parcel v9;
      android.os.IBinder v10;
      v6 = 1;
      v7 = Parcel.obtain();
      v8 = Parcel.obtain();
      v9 = v8;
      try
      {
        v7.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v10 = p0.asBinder();
        else
          v10 = null;
        v7.writeStrongBinder(v10);
        v7.writeString(p1);
        v7.writeInt(p2);
        v7.writeInt(com.gameloft.android.DecompRT.b2i(p3));
        if ( !p4 )
          v6 = 0;
        v7.writeInt(v6);
        this.a.transact(9001, v7, v9, 0);
        v9.readException();
      }
      catch ( Throwable v11 )
      {
        v8.recycle();
        v7.recycle();
        throw v11;
      }
      v9.recycle();
      v7.recycle();
    }

    public final void c(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            String p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeString(p1);
        v4.writeString(p2);
        this.a.transact(8011, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void c(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            String p2,
            boolean p3)
 throws android.os.RemoteException {
      int v5;
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v5 = 0;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeString(p1);
        v6.writeString(p2);
        if ( p3 )
          v5 = 1;
        v6.writeInt(v5);
        this.a.transact(12003, v6, v8, 0);
        v8.readException();
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
      v8.recycle();
      v6.recycle();
    }

    public final void c(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            boolean p2)
 throws android.os.RemoteException {
      int v4;
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v4 = 0;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeString(p1);
        if ( p2 )
          v4 = 1;
        v5.writeInt(v4);
        this.a.transact(6504, v5, v7, 0);
        v7.readException();
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
      v7.recycle();
      v5.recycle();
    }

    public final void c(com.google.android.gms.games.internal.IGamesCallbacks p0, boolean p1)
 throws android.os.RemoteException {
      int v3;
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v3 = 0;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        if ( p1 )
          v3 = 1;
        v4.writeInt(v3);
        this.a.transact(8027, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void c(com.google.android.gms.games.internal.IGamesCallbacks p0, String[] p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeStringArray(p1);
        this.a.transact(10020, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void c(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v2.writeString(p0);
        this.a.transact(5050, v2, v3, 0);
        v4.readException();
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void c(String p0, int p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v3.writeString(p0);
        v3.writeInt(p1);
        this.a.transact(5055, v3, v4, 0);
        v5.readException();
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
      v5.recycle();
      v3.recycle();
    }

    public final int d(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      int result; // RETVAL
    
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v2.writeString(p0);
        this.a.transact(5060, v2, v3, 0);
        v4.readException();
        result = v4.readInt();
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
      v4.recycle();
      v2.recycle();
      return result;
    }

    public final String d()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      String result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(5007, v1, v2, 0);
        v3.readException();
        result = v3.readString();
      }
      catch ( Throwable v5 )
      {
        v2.recycle();
        v1.recycle();
        throw v5;
      }
      v3.recycle();
      v1.recycle();
      return result;
    }

    public final void d(long p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v2.writeLong(p0);
        this.a.transact(10002, v2, v3, 0);
        v4.readException();
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void d(long p0, String p2)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v3.writeLong(p0);
        v3.writeString(p2);
        this.a.transact(12014, v3, v4, 0);
        v5.readException();
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void d(com.google.android.gms.games.internal.IGamesCallbacks p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.os.IBinder v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(5026, v2, v4, 0);
        v4.readException();
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void d(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            int p1,
            boolean p2,
            boolean p3)
 throws android.os.RemoteException {
      int v5;
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v5 = 1;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeInt(p1);
        v6.writeInt(com.gameloft.android.DecompRT.b2i(p2));
        if ( !p3 )
          v5 = 0;
        v6.writeInt(v5);
        this.a.transact(6003, v6, v8, 0);
        v8.readException();
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
      v8.recycle();
      v6.recycle();
    }

    public final void d(com.google.android.gms.games.internal.IGamesCallbacks p0, long p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeLong(p1);
        this.a.transact(12011, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void d(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            long p1,
            String p3)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeLong(p1);
        v4.writeString(p3);
        this.a.transact(12013, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void d(com.google.android.gms.games.internal.IGamesCallbacks p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeString(p1);
        this.a.transact(5037, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void d(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            int p2,
            boolean p3,
            boolean p4)
 throws android.os.RemoteException {
      int v6;
      android.os.Parcel v7;
      android.os.Parcel v8; // RETVAL
      android.os.Parcel v9;
      android.os.IBinder v10;
      v6 = 1;
      v7 = Parcel.obtain();
      v8 = Parcel.obtain();
      v9 = v8;
      try
      {
        v7.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v10 = p0.asBinder();
        else
          v10 = null;
        v7.writeStrongBinder(v10);
        v7.writeString(p1);
        v7.writeInt(p2);
        v7.writeInt(com.gameloft.android.DecompRT.b2i(p3));
        if ( !p4 )
          v6 = 0;
        v7.writeInt(v6);
        this.a.transact(9020, v7, v9, 0);
        v9.readException();
      }
      catch ( Throwable v11 )
      {
        v8.recycle();
        v7.recycle();
        throw v11;
      }
      v9.recycle();
      v7.recycle();
    }

    public final void d(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            String p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeString(p1);
        v4.writeString(p2);
        this.a.transact(8015, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void d(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            boolean p2)
 throws android.os.RemoteException {
      int v4;
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v4 = 0;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeString(p1);
        if ( p2 )
          v4 = 1;
        v5.writeInt(v4);
        this.a.transact(6505, v5, v7, 0);
        v7.readException();
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
      v7.recycle();
      v5.recycle();
    }

    public final void d(com.google.android.gms.games.internal.IGamesCallbacks p0, boolean p1)
 throws android.os.RemoteException {
      int v3;
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v3 = 0;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        if ( p1 )
          v3 = 1;
        v4.writeInt(v3);
        this.a.transact(12002, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void d(String p0, int p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v3.writeString(p0);
        v3.writeInt(p1);
        this.a.transact(10014, v3, v4, 0);
        v5.readException();
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
      v5.recycle();
      v3.recycle();
    }

    public final android.net.Uri e(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.net.Uri v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v2.writeString(p0);
        this.a.transact(5066, v2, v3, 0);
        v4.readException();
        if ( v4.readInt() != 0 )
          v5 = (android.net.Uri)android.net.Uri.CREATOR.createFromParcel(v4);
        else
          v5 = null;
      }
      catch ( Throwable v7 )
      {
        v3.recycle();
        v2.recycle();
        throw v7;
      }
      v4.recycle();
      v2.recycle();
      return v5;
    }

    public final String e()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      String result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(5012, v1, v2, 0);
        v3.readException();
        result = v3.readString();
      }
      catch ( Throwable v5 )
      {
        v2.recycle();
        v1.recycle();
        throw v5;
      }
      v3.recycle();
      v1.recycle();
      return result;
    }

    public final void e(long p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v2.writeLong(p0);
        this.a.transact(12012, v2, v3, 0);
        v4.readException();
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void e(com.google.android.gms.games.internal.IGamesCallbacks p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.os.IBinder v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(5027, v2, v4, 0);
        v4.readException();
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void e(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            int p1,
            boolean p2,
            boolean p3)
 throws android.os.RemoteException {
      int v5;
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v5 = 1;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeInt(p1);
        v6.writeInt(com.gameloft.android.DecompRT.b2i(p2));
        if ( !p3 )
          v5 = 0;
        v6.writeInt(v5);
        this.a.transact(6004, v6, v8, 0);
        v8.readException();
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
      v8.recycle();
      v6.recycle();
    }

    public final void e(com.google.android.gms.games.internal.IGamesCallbacks p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeString(p1);
        this.a.transact(5042, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void e(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            int p2,
            boolean p3,
            boolean p4)
 throws android.os.RemoteException {
      int v6;
      android.os.Parcel v7;
      android.os.Parcel v8; // RETVAL
      android.os.Parcel v9;
      android.os.IBinder v10;
      v6 = 1;
      v7 = Parcel.obtain();
      v8 = Parcel.obtain();
      v9 = v8;
      try
      {
        v7.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v10 = p0.asBinder();
        else
          v10 = null;
        v7.writeStrongBinder(v10);
        v7.writeString(p1);
        v7.writeInt(p2);
        v7.writeInt(com.gameloft.android.DecompRT.b2i(p3));
        if ( !p4 )
          v6 = 0;
        v7.writeInt(v6);
        this.a.transact(12021, v7, v9, 0);
        v9.readException();
      }
      catch ( Throwable v11 )
      {
        v8.recycle();
        v7.recycle();
        throw v11;
      }
      v9.recycle();
      v7.recycle();
    }

    public final void e(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            String p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeString(p1);
        v4.writeString(p2);
        this.a.transact(8016, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void e(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            boolean p2)
 throws android.os.RemoteException {
      int v4;
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v4 = 0;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeString(p1);
        if ( p2 )
          v4 = 1;
        v5.writeInt(v4);
        this.a.transact(12006, v5, v7, 0);
        v7.readException();
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
      v7.recycle();
      v5.recycle();
    }

    public final void e(com.google.android.gms.games.internal.IGamesCallbacks p0, boolean p1)
 throws android.os.RemoteException {
      int v3;
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v3 = 0;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        if ( p1 )
          v3 = 1;
        v4.writeInt(v3);
        this.a.transact(12032, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void e(String p0, int p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v3.writeString(p0);
        v3.writeInt(p1);
        this.a.transact(12017, v3, v4, 0);
        v5.readException();
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
      v5.recycle();
      v3.recycle();
    }

    public final com.google.android.gms.common.data.DataHolder f()
 throws android.os.RemoteException {
      android.os.Parcel v1 = null;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3 = null;
      com.google.android.gms.common.data.DataHolder v4; // RETVAL
      com.google.android.gms.common.data.DataHolder v5 = null;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            v1 = Parcel.obtain();
            v2 = Parcel.obtain();
            v3 = v2;
            try
            {
            v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
            this.a.transact(5013, v1, v2, 0);
            v3.readException();
            if ( v3.readInt() == 0 )
            {
            v5 = null;
            { _pc = 1; continue _sm; }
            }
            v4 = com.google.android.gms.common.data.f.x(v3);
            }
            catch ( Throwable v7 )
            {
            v2.recycle();
            v1.recycle();
            throw v7;
            }
            v5 = v4;
            _pc = 1;
            continue _sm;
          }
          case 1: {
            v3.recycle();
            v1.recycle();
            return v5;
            
          }
          default: throw new IllegalStateException("Unreachable");
        }
      }
    }

    public final void f(com.google.android.gms.games.internal.IGamesCallbacks p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.os.IBinder v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(5047, v2, v4, 0);
        v4.readException();
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void f(com.google.android.gms.games.internal.IGamesCallbacks p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeString(p1);
        this.a.transact(5043, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void f(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            int p2,
            boolean p3,
            boolean p4)
 throws android.os.RemoteException {
      int v6;
      android.os.Parcel v7;
      android.os.Parcel v8; // RETVAL
      android.os.Parcel v9;
      android.os.IBinder v10;
      v6 = 1;
      v7 = Parcel.obtain();
      v8 = Parcel.obtain();
      v9 = v8;
      try
      {
        v7.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v10 = p0.asBinder();
        else
          v10 = null;
        v7.writeStrongBinder(v10);
        v7.writeString(p1);
        v7.writeInt(p2);
        v7.writeInt(com.gameloft.android.DecompRT.b2i(p3));
        if ( !p4 )
          v6 = 0;
        v7.writeInt(v6);
        this.a.transact(12022, v7, v9, 0);
        v9.readException();
      }
      catch ( Throwable v11 )
      {
        v8.recycle();
        v7.recycle();
        throw v11;
      }
      v9.recycle();
      v7.recycle();
    }

    public final void f(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1,
            String p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeString(p1);
        v4.writeString(p2);
        this.a.transact(12009, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void f(com.google.android.gms.games.internal.IGamesCallbacks p0, boolean p1)
 throws android.os.RemoteException {
      int v3;
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v3 = 0;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        if ( p1 )
          v3 = 1;
        v4.writeInt(v3);
        this.a.transact(12016, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void f(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v2.writeString(p0);
        this.a.transact(8002, v2, v3, 0);
        v4.readException();
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
      v4.recycle();
      v2.recycle();
    }

    public final android.content.Intent g(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.content.Intent v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v2.writeString(p0);
        this.a.transact(9004, v2, v3, 0);
        v4.readException();
        if ( v4.readInt() != 0 )
          v5 = (android.content.Intent)android.content.Intent.CREATOR.createFromParcel(v4);
        else
          v5 = null;
      }
      catch ( Throwable v7 )
      {
        v3.recycle();
        v2.recycle();
        throw v7;
      }
      v4.recycle();
      v2.recycle();
      return v5;
    }

    public final void g(com.google.android.gms.games.internal.IGamesCallbacks p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.os.IBinder v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(5049, v2, v4, 0);
        v4.readException();
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void g(com.google.android.gms.games.internal.IGamesCallbacks p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeString(p1);
        this.a.transact(5052, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final boolean g()
 throws android.os.RemoteException {
      boolean v1;
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      int Int; // RETVAL
    
      v1 = false;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(5067, v2, v3, 0);
        v4.readException();
        Int = v4.readInt();
      }
      catch ( Throwable v7 )
      {
        v3.recycle();
        v2.recycle();
        throw v7;
      }
      if ( Int != 0 )
        v1 = true;
      v4.recycle();
      v2.recycle();
      return v1;
    }

    public final android.os.ParcelFileDescriptor h(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.os.ParcelFileDescriptor v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v2.writeString(p0);
        this.a.transact(9030, v2, v3, 0);
        v4.readException();
        if ( v4.readInt() != 0 )
          v5 = (android.os.ParcelFileDescriptor)android.os.ParcelFileDescriptor.CREATOR.createFromParcel(v4);
        else
          v5 = null;
      }
      catch ( Throwable v7 )
      {
        v3.recycle();
        v2.recycle();
        throw v7;
      }
      v4.recycle();
      v2.recycle();
      return v5;
    }

    public final com.google.android.gms.common.data.DataHolder h()
 throws android.os.RemoteException {
      android.os.Parcel v1 = null;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3 = null;
      com.google.android.gms.common.data.DataHolder v4; // RETVAL
      com.google.android.gms.common.data.DataHolder v5 = null;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            v1 = Parcel.obtain();
            v2 = Parcel.obtain();
            v3 = v2;
            try
            {
            v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
            this.a.transact(5502, v1, v2, 0);
            v3.readException();
            if ( v3.readInt() == 0 )
            {
            v5 = null;
            { _pc = 1; continue _sm; }
            }
            v4 = com.google.android.gms.common.data.f.x(v3);
            }
            catch ( Throwable v7 )
            {
            v2.recycle();
            v1.recycle();
            throw v7;
            }
            v5 = v4;
            _pc = 1;
            continue _sm;
          }
          case 1: {
            v3.recycle();
            v1.recycle();
            return v5;
            
          }
          default: throw new IllegalStateException("Unreachable");
        }
      }
    }

    public final com.google.android.gms.games.multiplayer.realtime.RoomEntity h(
            com.google.android.gms.games.internal.IGamesCallbacks p0,
            String p1)
 throws android.os.RemoteException {
      com.google.android.gms.games.multiplayer.realtime.RoomEntity v3;
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v3 = null;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeString(p1);
        this.a.transact(5053, v4, v6, 0);
        v6.readException();
        if ( v6.readInt() != 0 )
          v3 = (com.google.android.gms.games.multiplayer.realtime.RoomEntity)com.google.android.gms.games.multiplayer.realtime.RoomEntity.CREATOR.createFromParcel(v6);
      }
      catch ( Throwable v9 )
      {
        v5.recycle();
        v4.recycle();
        throw v9;
      }
      v6.recycle();
      v4.recycle();
      return v3;
    }

    public final void h(com.google.android.gms.games.internal.IGamesCallbacks p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.os.IBinder v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(5056, v2, v4, 0);
        v4.readException();
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
      v4.recycle();
      v2.recycle();
    }

    public final int i()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      int result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(8024, v1, v2, 0);
        v3.readException();
        result = v3.readInt();
      }
      catch ( Throwable v5 )
      {
        v2.recycle();
        v1.recycle();
        throw v5;
      }
      v3.recycle();
      v1.recycle();
      return result;
    }

    public final android.content.Intent i(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.content.Intent v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        v2.writeString(p0);
        this.a.transact(12034, v2, v3, 0);
        v4.readException();
        if ( v4.readInt() != 0 )
          v5 = (android.content.Intent)android.content.Intent.CREATOR.createFromParcel(v4);
        else
          v5 = null;
      }
      catch ( Throwable v7 )
      {
        v3.recycle();
        v2.recycle();
        throw v7;
      }
      v4.recycle();
      v2.recycle();
      return v5;
    }

    public final void i(com.google.android.gms.games.internal.IGamesCallbacks p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.os.IBinder v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(5062, v2, v4, 0);
        v4.readException();
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void i(com.google.android.gms.games.internal.IGamesCallbacks p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeString(p1);
        this.a.transact(5061, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void j()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(8022, v1, v2, 0);
        v3.readException();
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        v1.recycle();
        throw v4;
      }
      v3.recycle();
      v1.recycle();
    }

    public final void j(com.google.android.gms.games.internal.IGamesCallbacks p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.os.IBinder v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(11001, v2, v4, 0);
        v4.readException();
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void j(com.google.android.gms.games.internal.IGamesCallbacks p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeString(p1);
        this.a.transact(5057, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final android.content.Intent k()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      android.content.Intent v4;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(9003, v1, v2, 0);
        v3.readException();
        if ( v3.readInt() != 0 )
          v4 = (android.content.Intent)android.content.Intent.CREATOR.createFromParcel(v3);
        else
          v4 = null;
      }
      catch ( Throwable v6 )
      {
        v2.recycle();
        v1.recycle();
        throw v6;
      }
      v3.recycle();
      v1.recycle();
      return v4;
    }

    public final void k(com.google.android.gms.games.internal.IGamesCallbacks p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeString(p1);
        this.a.transact(7001, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final android.content.Intent l()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      android.content.Intent v4;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(9005, v1, v2, 0);
        v3.readException();
        if ( v3.readInt() != 0 )
          v4 = (android.content.Intent)android.content.Intent.CREATOR.createFromParcel(v3);
        else
          v4 = null;
      }
      catch ( Throwable v6 )
      {
        v2.recycle();
        v1.recycle();
        throw v6;
      }
      v3.recycle();
      v1.recycle();
      return v4;
    }

    public final void l(com.google.android.gms.games.internal.IGamesCallbacks p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeString(p1);
        this.a.transact(8005, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final android.content.Intent m()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      android.content.Intent v4;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(9006, v1, v2, 0);
        v3.readException();
        if ( v3.readInt() != 0 )
          v4 = (android.content.Intent)android.content.Intent.CREATOR.createFromParcel(v3);
        else
          v4 = null;
      }
      catch ( Throwable v6 )
      {
        v2.recycle();
        v1.recycle();
        throw v6;
      }
      v3.recycle();
      v1.recycle();
      return v4;
    }

    public final void m(com.google.android.gms.games.internal.IGamesCallbacks p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeString(p1);
        this.a.transact(8006, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final android.content.Intent n()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      android.content.Intent v4;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(9007, v1, v2, 0);
        v3.readException();
        if ( v3.readInt() != 0 )
          v4 = (android.content.Intent)android.content.Intent.CREATOR.createFromParcel(v3);
        else
          v4 = null;
      }
      catch ( Throwable v6 )
      {
        v2.recycle();
        v1.recycle();
        throw v6;
      }
      v3.recycle();
      v1.recycle();
      return v4;
    }

    public final void n(com.google.android.gms.games.internal.IGamesCallbacks p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeString(p1);
        this.a.transact(8009, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final android.content.Intent o()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      android.content.Intent v4;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(9010, v1, v2, 0);
        v3.readException();
        if ( v3.readInt() != 0 )
          v4 = (android.content.Intent)android.content.Intent.CREATOR.createFromParcel(v3);
        else
          v4 = null;
      }
      catch ( Throwable v6 )
      {
        v2.recycle();
        v1.recycle();
        throw v6;
      }
      v3.recycle();
      v1.recycle();
      return v4;
    }

    public final void o(com.google.android.gms.games.internal.IGamesCallbacks p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeString(p1);
        this.a.transact(8010, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final android.content.Intent p()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      android.content.Intent v4;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(9012, v1, v2, 0);
        v3.readException();
        if ( v3.readInt() != 0 )
          v4 = (android.content.Intent)android.content.Intent.CREATOR.createFromParcel(v3);
        else
          v4 = null;
      }
      catch ( Throwable v6 )
      {
        v2.recycle();
        v1.recycle();
        throw v6;
      }
      v3.recycle();
      v1.recycle();
      return v4;
    }

    public final void p(com.google.android.gms.games.internal.IGamesCallbacks p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeString(p1);
        this.a.transact(8014, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final android.content.Intent q()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      android.content.Intent v4;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(9013, v1, v2, 0);
        v3.readException();
        if ( v3.readInt() != 0 )
          v4 = (android.content.Intent)android.content.Intent.CREATOR.createFromParcel(v3);
        else
          v4 = null;
      }
      catch ( Throwable v6 )
      {
        v2.recycle();
        v1.recycle();
        throw v6;
      }
      v3.recycle();
      v1.recycle();
      return v4;
    }

    public final void q(com.google.android.gms.games.internal.IGamesCallbacks p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeString(p1);
        this.a.transact(9002, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final int r()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      int result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(9019, v1, v2, 0);
        v3.readException();
        result = v3.readInt();
      }
      catch ( Throwable v5 )
      {
        v2.recycle();
        v1.recycle();
        throw v5;
      }
      v3.recycle();
      v1.recycle();
      return result;
    }

    public final void r(com.google.android.gms.games.internal.IGamesCallbacks p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeString(p1);
        this.a.transact(12020, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final int s()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      int result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(10013, v1, v2, 0);
        v3.readException();
        result = v3.readInt();
      }
      catch ( Throwable v5 )
      {
        v2.recycle();
        v1.recycle();
        throw v5;
      }
      v3.recycle();
      v1.recycle();
      return result;
    }

    public final void s(com.google.android.gms.games.internal.IGamesCallbacks p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeString(p1);
        this.a.transact(12005, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final int t()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      int result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(10023, v1, v2, 0);
        v3.readException();
        result = v3.readInt();
      }
      catch ( Throwable v5 )
      {
        v2.recycle();
        v1.recycle();
        throw v5;
      }
      v3.recycle();
      v1.recycle();
      return result;
    }

    public final void t(com.google.android.gms.games.internal.IGamesCallbacks p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeString(p1);
        this.a.transact(12027, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final android.content.Intent u()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      android.content.Intent v4;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(10015, v1, v2, 0);
        v3.readException();
        if ( v3.readInt() != 0 )
          v4 = (android.content.Intent)android.content.Intent.CREATOR.createFromParcel(v3);
        else
          v4 = null;
      }
      catch ( Throwable v6 )
      {
        v2.recycle();
        v1.recycle();
        throw v6;
      }
      v3.recycle();
      v1.recycle();
      return v4;
    }

    public final void u(com.google.android.gms.games.internal.IGamesCallbacks p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeString(p1);
        this.a.transact(12008, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void v()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(11002, v1, v2, 0);
        v3.readException();
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        v1.recycle();
        throw v4;
      }
      v3.recycle();
      v1.recycle();
    }

    public final int w()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      int result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(12035, v1, v2, 0);
        v3.readException();
        result = v3.readInt();
      }
      catch ( Throwable v5 )
      {
        v2.recycle();
        v1.recycle();
        throw v5;
      }
      v3.recycle();
      v1.recycle();
      return result;
    }

    public final int x()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      int result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(12036, v1, v2, 0);
        v3.readException();
        result = v3.readInt();
      }
      catch ( Throwable v5 )
      {
        v2.recycle();
        v1.recycle();
        throw v5;
      }
      v3.recycle();
      v1.recycle();
      return result;
    }

    public final boolean y()
 throws android.os.RemoteException {
      boolean v1;
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      int Int; // RETVAL
    
      v1 = false;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesService");
        this.a.transact(12025, v2, v3, 0);
        v4.readException();
        Int = v4.readInt();
      }
      catch ( Throwable v7 )
      {
        v3.recycle();
        v2.recycle();
        throw v7;
      }
      if ( Int != 0 )
        v1 = true;
      v4.recycle();
      v2.recycle();
      return v1;
    }

}
