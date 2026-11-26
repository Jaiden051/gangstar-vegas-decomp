// Decompiled from classes.dex (SourceFile: c$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.dynamic;

import android.os.Bundle;
import android.os.Parcel;
class c$a$a implements com.google.android.gms.dynamic.c {
    // Fields
    private android.os.IBinder a;

    // Methods
    c$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final com.google.android.gms.dynamic.d a()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      com.google.android.gms.dynamic.d result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        this.a.transact(2, v1, v2, 0);
        v3.readException();
        result = com.google.android.gms.dynamic.d$a.ag(v3.readStrongBinder());
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

    public final void a(android.content.Intent p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        if ( p0 != null )
        {
          v2.writeInt(1);
          p0.writeToParcel(v2, 0);
        }
        else
        {
          v2.writeInt(0);
        }
        this.a.transact(25, v2, v3, 0);
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

    public final void a(android.content.Intent p0, int p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
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
        this.a.transact(26, v3, v4, 0);
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

    public final void a(com.google.android.gms.dynamic.d p0)
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
        v2.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(20, v2, v4, 0);
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
        v2.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        v2.writeInt(com.gameloft.android.DecompRT.b2i(p0));
        this.a.transact(21, v2, v3, 0);
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
        v1.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        this.a.transact(3, v1, v2, 0);
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

    public final void b(com.google.android.gms.dynamic.d p0)
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
        v2.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(27, v2, v4, 0);
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
        v2.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        v2.writeInt(com.gameloft.android.DecompRT.b2i(p0));
        this.a.transact(22, v2, v3, 0);
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

    public final int c()
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
        v1.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        this.a.transact(4, v1, v2, 0);
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

    public final void c(boolean p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        v2.writeInt(com.gameloft.android.DecompRT.b2i(p0));
        this.a.transact(23, v2, v3, 0);
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

    public final com.google.android.gms.dynamic.c d()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      com.google.android.gms.dynamic.c result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        this.a.transact(5, v1, v2, 0);
        v3.readException();
        result = c$a.af(v3.readStrongBinder());
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

    public final void d(boolean p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        v2.writeInt(com.gameloft.android.DecompRT.b2i(p0));
        this.a.transact(24, v2, v3, 0);
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

    public final com.google.android.gms.dynamic.d e()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      com.google.android.gms.dynamic.d result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        this.a.transact(6, v1, v2, 0);
        v3.readException();
        result = com.google.android.gms.dynamic.d$a.ag(v3.readStrongBinder());
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

    public final boolean f()
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
        v2.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        this.a.transact(7, v2, v3, 0);
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

    public final String g()
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
        v1.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        this.a.transact(8, v1, v2, 0);
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

    public final com.google.android.gms.dynamic.c h()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      com.google.android.gms.dynamic.c result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        this.a.transact(9, v1, v2, 0);
        v3.readException();
        result = c$a.af(v3.readStrongBinder());
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
        v1.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        this.a.transact(10, v1, v2, 0);
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

    public final boolean j()
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
        v2.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        this.a.transact(11, v2, v3, 0);
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

    public final com.google.android.gms.dynamic.d k()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      com.google.android.gms.dynamic.d result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        this.a.transact(12, v1, v2, 0);
        v3.readException();
        result = com.google.android.gms.dynamic.d$a.ag(v3.readStrongBinder());
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

    public final boolean l()
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
        v2.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        this.a.transact(13, v2, v3, 0);
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

    public final boolean m()
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
        v2.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        this.a.transact(14, v2, v3, 0);
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

    public final boolean n()
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
        v2.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        this.a.transact(15, v2, v3, 0);
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

    public final boolean o()
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
        v2.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        this.a.transact(16, v2, v3, 0);
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

    public final boolean p()
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
        v2.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        this.a.transact(17, v2, v3, 0);
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

    public final boolean q()
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
        v2.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        this.a.transact(18, v2, v3, 0);
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

    public final boolean r()
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
        v2.writeInterfaceToken("com.google.android.gms.dynamic.IFragmentWrapper");
        this.a.transact(19, v2, v3, 0);
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
