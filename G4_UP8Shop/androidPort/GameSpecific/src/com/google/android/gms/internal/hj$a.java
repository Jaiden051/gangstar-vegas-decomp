// Decompiled from classes.dex (SourceFile: hj$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Bundle;
public abstract class hj$a extends android.os.Binder implements com.google.android.gms.internal.hj {
    // Methods
    public static com.google.android.gms.internal.hj L(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.hj )
        return (com.google.android.gms.internal.hj)LocalInterface;
      else
        return (com.google.android.gms.internal.hj)new com.google.android.gms.internal.hj$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      android.os.Bundle v5;
      boolean v6;
      com.google.android.gms.internal.hi v8;
      int Int;
      String String;
      String v11;
      String[] StringArray;
      String v13;
      android.os.Bundle v14;
      com.google.android.gms.internal.hi v15;
      int v16;
      String v17;
      com.google.android.gms.internal.hi v18;
      int v19;
      String v20;
      com.google.android.gms.internal.hi v21;
      int v22;
      String v23;
      com.google.android.gms.internal.hi v24;
      int v25;
      String v26;
      com.google.android.gms.internal.hi v27;
      int v28;
      String v29;
      com.google.android.gms.internal.hi v30;
      int v31;
      String v32;
      String v33;
      String[] v34;
      String v35;
      android.os.IBinder StrongBinder;
      String v37;
      android.os.Bundle v38;
      com.google.android.gms.internal.hi v39;
      int v40;
      String v41;
      com.google.android.gms.internal.hi v42;
      int v43;
      String v44;
      com.google.android.gms.internal.hi v45;
      int v46;
      String v47;
      com.google.android.gms.internal.hi v48;
      int v49;
      String v50;
      com.google.android.gms.internal.hi v51;
      int v52;
      String v53;
      com.google.android.gms.internal.hi v54;
      int v55;
      String v56;
      com.google.android.gms.internal.hi v57;
      int v58;
      String v59;
      com.google.android.gms.internal.hi v60;
      int v61;
      String v62;
      com.google.android.gms.internal.hi v63;
      int v64;
      String v65;
      android.os.IBinder v66;
      android.os.Bundle v67;
      com.google.android.gms.internal.hi v68;
      int v69;
      String v70;
      String[] v71;
      String v72;
      android.os.Bundle v73;
      com.google.android.gms.internal.hi v74;
      int v75;
      String v76;
      com.google.android.gms.internal.hi v77;
      int v78;
      String v79;
      com.google.android.gms.internal.hi v80;
      int v81;
      String v82;
      com.google.android.gms.internal.hi v83;
      int v84;
      String v85;
      String v86;
      String[] v87;
      android.os.Bundle v88;
      v5 = null;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          v8 = hi$a.K(p1.readStrongBinder());
          Int = p1.readInt();
          String = p1.readString();
          v11 = p1.readString();
          StringArray = p1.createStringArray();
          v13 = p1.readString();
          if ( p1.readInt() != 0 )
            v14 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v14 = null;
          this.a(v8, Int, String, v11, StringArray, v13, v14);
          p2.writeNoException();
          v6 = true;
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          v15 = hi$a.K(p1.readStrongBinder());
          v16 = p1.readInt();
          v17 = p1.readString();
          if ( p1.readInt() != 0 )
            v5 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          this.a(v15, v16, v17, v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          this.a(hi$a.K(p1.readStrongBinder()), p1.readInt(), p1.readString());
          p2.writeNoException();
          v6 = true;
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          this.a(hi$a.K(p1.readStrongBinder()), p1.readInt());
          p2.writeNoException();
          v6 = true;
          break;
        case 5:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          v18 = hi$a.K(p1.readStrongBinder());
          v19 = p1.readInt();
          v20 = p1.readString();
          if ( p1.readInt() != 0 )
            v5 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          this.b(v18, v19, v20, v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 6:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          v21 = hi$a.K(p1.readStrongBinder());
          v22 = p1.readInt();
          v23 = p1.readString();
          if ( p1.readInt() != 0 )
            v5 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          this.c(v21, v22, v23, v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 7:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          v24 = hi$a.K(p1.readStrongBinder());
          v25 = p1.readInt();
          v26 = p1.readString();
          if ( p1.readInt() != 0 )
            v5 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          this.d(v24, v25, v26, v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 8:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          v27 = hi$a.K(p1.readStrongBinder());
          v28 = p1.readInt();
          v29 = p1.readString();
          if ( p1.readInt() != 0 )
            v5 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          this.e(v27, v28, v29, v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 9:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          v30 = hi$a.K(p1.readStrongBinder());
          v31 = p1.readInt();
          v32 = p1.readString();
          v33 = p1.readString();
          v34 = p1.createStringArray();
          v35 = p1.readString();
          StrongBinder = p1.readStrongBinder();
          v37 = p1.readString();
          if ( p1.readInt() != 0 )
            v38 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v38 = null;
          this.a(v30, v31, v32, v33, v34, v35, StrongBinder, v37, v38);
          p2.writeNoException();
          v6 = true;
          break;
        case 10:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          this.a(hi$a.K(p1.readStrongBinder()), p1.readInt(), p1.readString(), p1.readString(), p1.createStringArray());
          p2.writeNoException();
          v6 = true;
          break;
        case 11:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          v39 = hi$a.K(p1.readStrongBinder());
          v40 = p1.readInt();
          v41 = p1.readString();
          if ( p1.readInt() != 0 )
            v5 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          this.f(v39, v40, v41, v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 12:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          v42 = hi$a.K(p1.readStrongBinder());
          v43 = p1.readInt();
          v44 = p1.readString();
          if ( p1.readInt() != 0 )
            v5 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          this.g(v42, v43, v44, v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 13:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          v45 = hi$a.K(p1.readStrongBinder());
          v46 = p1.readInt();
          v47 = p1.readString();
          if ( p1.readInt() != 0 )
            v5 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          this.h(v45, v46, v47, v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 14:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          v48 = hi$a.K(p1.readStrongBinder());
          v49 = p1.readInt();
          v50 = p1.readString();
          if ( p1.readInt() != 0 )
            v5 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          this.i(v48, v49, v50, v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 15:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          v51 = hi$a.K(p1.readStrongBinder());
          v52 = p1.readInt();
          v53 = p1.readString();
          if ( p1.readInt() != 0 )
            v5 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          this.j(v51, v52, v53, v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 16:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          v54 = hi$a.K(p1.readStrongBinder());
          v55 = p1.readInt();
          v56 = p1.readString();
          if ( p1.readInt() != 0 )
            v5 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          this.k(v54, v55, v56, v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 17:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          v57 = hi$a.K(p1.readStrongBinder());
          v58 = p1.readInt();
          v59 = p1.readString();
          if ( p1.readInt() != 0 )
            v5 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          this.l(v57, v58, v59, v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 18:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          v60 = hi$a.K(p1.readStrongBinder());
          v61 = p1.readInt();
          v62 = p1.readString();
          if ( p1.readInt() != 0 )
            v5 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          this.m(v60, v61, v62, v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 19:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          v63 = hi$a.K(p1.readStrongBinder());
          v64 = p1.readInt();
          v65 = p1.readString();
          v66 = p1.readStrongBinder();
          if ( p1.readInt() != 0 )
            v67 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v67 = null;
          this.a(v63, v64, v65, v66, v67);
          p2.writeNoException();
          v6 = true;
          break;
        case 20:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          v68 = hi$a.K(p1.readStrongBinder());
          v69 = p1.readInt();
          v70 = p1.readString();
          v71 = p1.createStringArray();
          v72 = p1.readString();
          if ( p1.readInt() != 0 )
            v73 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v73 = null;
          this.a(v68, v69, v70, v71, v72, v73);
          p2.writeNoException();
          v6 = true;
          break;
        case 21:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          this.b(hi$a.K(p1.readStrongBinder()), p1.readInt(), p1.readString());
          p2.writeNoException();
          v6 = true;
          break;
        case 22:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          this.c(hi$a.K(p1.readStrongBinder()), p1.readInt(), p1.readString());
          p2.writeNoException();
          v6 = true;
          break;
        case 23:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          v74 = hi$a.K(p1.readStrongBinder());
          v75 = p1.readInt();
          v76 = p1.readString();
          if ( p1.readInt() != 0 )
            v5 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          this.n(v74, v75, v76, v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 24:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          this.d(hi$a.K(p1.readStrongBinder()), p1.readInt(), p1.readString());
          p2.writeNoException();
          v6 = true;
          break;
        case 25:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          v77 = hi$a.K(p1.readStrongBinder());
          v78 = p1.readInt();
          v79 = p1.readString();
          if ( p1.readInt() != 0 )
            v5 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          this.o(v77, v78, v79, v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 26:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          this.e(hi$a.K(p1.readStrongBinder()), p1.readInt(), p1.readString());
          p2.writeNoException();
          v6 = true;
          break;
        case 27:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          v80 = hi$a.K(p1.readStrongBinder());
          v81 = p1.readInt();
          v82 = p1.readString();
          if ( p1.readInt() != 0 )
            v5 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          this.p(v80, v81, v82, v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 28:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          this.b(hi$a.K(p1.readStrongBinder()), p1.readInt(), p1.readString(), p1.readString(), p1.createStringArray());
          p2.writeNoException();
          v6 = true;
          break;
        case 30:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          v83 = hi$a.K(p1.readStrongBinder());
          v84 = p1.readInt();
          v85 = p1.readString();
          v86 = p1.readString();
          v87 = p1.createStringArray();
          if ( p1.readInt() != 0 )
            v88 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v88 = null;
          this.a(v83, v84, v85, v86, v87, v88);
          p2.writeNoException();
          v6 = true;
          break;
        case 31:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          this.f(hi$a.K(p1.readStrongBinder()), p1.readInt(), p1.readString());
          p2.writeNoException();
          v6 = true;
          break;
        case 32:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          this.g(hi$a.K(p1.readStrongBinder()), p1.readInt(), p1.readString());
          p2.writeNoException();
          v6 = true;
          break;
        case 33:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          this.a(hi$a.K(p1.readStrongBinder()), p1.readInt(), p1.readString(), p1.readString(), p1.readString(), p1.createStringArray());
          p2.writeNoException();
          v6 = true;
          break;
        case 34:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          this.a(hi$a.K(p1.readStrongBinder()), p1.readInt(), p1.readString(), p1.readString());
          p2.writeNoException();
          v6 = true;
          break;
        case 35:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          this.h(hi$a.K(p1.readStrongBinder()), p1.readInt(), p1.readString());
          p2.writeNoException();
          v6 = true;
          break;
        case 36:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
          this.i(hi$a.K(p1.readStrongBinder()), p1.readInt(), p1.readString());
          p2.writeNoException();
          v6 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.common.internal.IGmsServiceBroker");
          v6 = true;
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
