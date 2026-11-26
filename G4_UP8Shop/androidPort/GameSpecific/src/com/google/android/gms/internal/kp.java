// Decompiled from classes.dex (SourceFile: kp.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class kp implements android.os.Parcelable.Creator {
    // Methods
    public kp()
    {
      super();
    }

    static void a(com.google.android.gms.internal.ko p0, android.os.Parcel p1, int p2)
    {
      int v3;
      java.util.Set v4;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      v4 = p0.d();
      if ( v4.contains(Integer.valueOf(1)) )
        com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.e());
      if ( v4.contains(Integer.valueOf(2)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, (android.os.Parcelable)p0.i(), p2, true);
      if ( v4.contains(Integer.valueOf(3)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.k(), true);
      if ( v4.contains(Integer.valueOf(4)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, (android.os.Parcelable)p0.n(), p2, true);
      if ( v4.contains(Integer.valueOf(5)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.p(), true);
      if ( v4.contains(Integer.valueOf(6)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.r(), true);
      if ( v4.contains(Integer.valueOf(7)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.t(), true);
      if ( v4.contains(Integer.valueOf(8)) )
        com.google.android.gms.common.internal.safeparcel.b.b(p1, 8, p0.w(), true);
      if ( v4.contains(Integer.valueOf(9)) )
        com.google.android.gms.common.internal.safeparcel.b.c(p1, 9, p0.y());
      if ( v4.contains(Integer.valueOf(10)) )
        com.google.android.gms.common.internal.safeparcel.b.b(p1, 10, p0.B(), true);
      if ( v4.contains(Integer.valueOf(11)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 11, (android.os.Parcelable)p0.E(), p2, true);
      if ( v4.contains(Integer.valueOf(12)) )
        com.google.android.gms.common.internal.safeparcel.b.b(p1, 12, p0.H(), true);
      if ( v4.contains(Integer.valueOf(13)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 13, p0.J(), true);
      if ( v4.contains(Integer.valueOf(14)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 14, p0.L(), true);
      if ( v4.contains(Integer.valueOf(15)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 15, (android.os.Parcelable)p0.O(), p2, true);
      if ( v4.contains(Integer.valueOf(17)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 17, p0.S(), true);
      if ( v4.contains(Integer.valueOf(16)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 16, p0.Q(), true);
      if ( v4.contains(Integer.valueOf(19)) )
        com.google.android.gms.common.internal.safeparcel.b.b(p1, 19, p0.X(), true);
      if ( v4.contains(Integer.valueOf(18)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 18, p0.U(), true);
      if ( v4.contains(Integer.valueOf(21)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 21, p0.ab(), true);
      if ( v4.contains(Integer.valueOf(20)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 20, p0.Z(), true);
      if ( v4.contains(Integer.valueOf(23)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 23, p0.af(), true);
      if ( v4.contains(Integer.valueOf(22)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 22, p0.ad(), true);
      if ( v4.contains(Integer.valueOf(25)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 25, p0.aj(), true);
      if ( v4.contains(Integer.valueOf(24)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 24, p0.ah(), true);
      if ( v4.contains(Integer.valueOf(27)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 27, p0.an(), true);
      if ( v4.contains(Integer.valueOf(26)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 26, p0.al(), true);
      if ( v4.contains(Integer.valueOf(29)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 29, (android.os.Parcelable)p0.as(), p2, true);
      if ( v4.contains(Integer.valueOf(28)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 28, p0.ap(), true);
      if ( v4.contains(Integer.valueOf(31)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 31, p0.aw(), true);
      if ( v4.contains(Integer.valueOf(30)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 30, p0.au(), true);
      if ( v4.contains(Integer.valueOf(34)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 34, (android.os.Parcelable)p0.aD(), p2, true);
      if ( v4.contains(Integer.valueOf(32)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 32, p0.ay(), true);
      if ( v4.contains(Integer.valueOf(33)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 33, p0.aA(), true);
      if ( v4.contains(Integer.valueOf(38)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 38, p0.aK());
      if ( v4.contains(Integer.valueOf(39)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 39, p0.aM(), true);
      if ( v4.contains(Integer.valueOf(36)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 36, p0.aF());
      if ( v4.contains(Integer.valueOf(37)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 37, (android.os.Parcelable)p0.aI(), p2, true);
      if ( v4.contains(Integer.valueOf(42)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 42, p0.aU(), true);
      if ( v4.contains(Integer.valueOf(43)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 43, p0.aW(), true);
      if ( v4.contains(Integer.valueOf(40)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 40, (android.os.Parcelable)p0.aP(), p2, true);
      if ( v4.contains(Integer.valueOf(41)) )
        com.google.android.gms.common.internal.safeparcel.b.b(p1, 41, p0.aS(), true);
      if ( v4.contains(Integer.valueOf(46)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 46, (android.os.Parcelable)p0.bd(), p2, true);
      if ( v4.contains(Integer.valueOf(47)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 47, p0.bf(), true);
      if ( v4.contains(Integer.valueOf(44)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 44, p0.aY(), true);
      if ( v4.contains(Integer.valueOf(45)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 45, p0.ba(), true);
      if ( v4.contains(Integer.valueOf(51)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 51, p0.bo(), true);
      if ( v4.contains(Integer.valueOf(50)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 50, (android.os.Parcelable)p0.bm(), p2, true);
      if ( v4.contains(Integer.valueOf(49)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 49, p0.bj(), true);
      if ( v4.contains(Integer.valueOf(48)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 48, p0.bh(), true);
      if ( v4.contains(Integer.valueOf(55)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 55, p0.bw(), true);
      if ( v4.contains(Integer.valueOf(54)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 54, p0.bu(), true);
      if ( v4.contains(Integer.valueOf(53)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 53, p0.bs(), true);
      if ( v4.contains(Integer.valueOf(52)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 52, p0.bq(), true);
      if ( v4.contains(Integer.valueOf(56)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 56, p0.by(), true);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.internal.ko bE(android.os.Parcel p0)
    {
      int v1;
      java.util.Set v2;
      int v3;
      com.google.android.gms.internal.ko v4;
      java.util.ArrayList v5;
      com.google.android.gms.internal.ko v6;
      String v7;
      String v8;
      String v9;
      java.util.ArrayList v10;
      int v11;
      java.util.ArrayList v12;
      com.google.android.gms.internal.ko v13;
      java.util.ArrayList v14;
      String v15;
      String v16;
      com.google.android.gms.internal.ko v17;
      String v18;
      String v19;
      String v20;
      java.util.ArrayList v21;
      String v22;
      String v23;
      String v24;
      String v25;
      String v26;
      String v27;
      String v28;
      String v29;
      String v30;
      com.google.android.gms.internal.ko v31;
      String v32;
      String v33;
      String v34;
      String v35;
      com.google.android.gms.internal.ko v36;
      double v37;
      com.google.android.gms.internal.ko v38;
      double v39;
      String v40;
      com.google.android.gms.internal.ko v41;
      java.util.ArrayList v42;
      String v43;
      String v44;
      String v45;
      String v46;
      com.google.android.gms.internal.ko v47;
      String v48;
      String v49;
      String v50;
      com.google.android.gms.internal.ko v51;
      String v52;
      String v53;
      String v54;
      String v55;
      String v56;
      String v57;
      int v58;
      com.google.android.gms.internal.ko v59;
      com.google.android.gms.internal.ko v60;
      com.google.android.gms.internal.ko v61;
      com.google.android.gms.internal.ko v62;
      com.google.android.gms.internal.ko v63;
      com.google.android.gms.internal.ko v64;
      com.google.android.gms.internal.ko v65;
      com.google.android.gms.internal.ko v66;
      com.google.android.gms.internal.ko v67;
      com.google.android.gms.internal.ko v68;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = new java.util.HashSet();
      v3 = 0;
      v4 = null;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = null;
      v9 = null;
      v10 = null;
      v11 = 0;
      v12 = null;
      v13 = null;
      v14 = null;
      v15 = null;
      v16 = null;
      v17 = null;
      v18 = null;
      v19 = null;
      v20 = null;
      v21 = null;
      v22 = null;
      v23 = null;
      v24 = null;
      v25 = null;
      v26 = null;
      v27 = null;
      v28 = null;
      v29 = null;
      v30 = null;
      v31 = null;
      v32 = null;
      v33 = null;
      v34 = null;
      v35 = null;
      v36 = null;
      v37 = 0.0;
      v38 = null;
      v39 = 0.0;
      v40 = null;
      v41 = null;
      v42 = null;
      v43 = null;
      v44 = null;
      v45 = null;
      v46 = null;
      v47 = null;
      v48 = null;
      v49 = null;
      v50 = null;
      v51 = null;
      v52 = null;
      v53 = null;
      v54 = null;
      v55 = null;
      v56 = null;
      v57 = null;
      while ( p0.dataPosition() < v1 )
      {
        v58 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v58) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v58);
            v2.add(Integer.valueOf(1));
            break;
          case 2:
            v59 = (com.google.android.gms.internal.ko)com.google.android.gms.common.internal.safeparcel.a.a(p0, v58, (android.os.Parcelable.Creator)ko.CREATOR);
            v2.add(Integer.valueOf(2));
            v4 = v59;
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.B(p0, v58);
            v2.add(Integer.valueOf(3));
            break;
          case 4:
            v60 = (com.google.android.gms.internal.ko)com.google.android.gms.common.internal.safeparcel.a.a(p0, v58, (android.os.Parcelable.Creator)ko.CREATOR);
            v2.add(Integer.valueOf(4));
            v6 = v60;
            break;
          case 5:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(5));
            break;
          case 6:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(6));
            break;
          case 7:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(7));
            break;
          case 8:
            v10 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v58, (android.os.Parcelable.Creator)ko.CREATOR);
            v2.add(Integer.valueOf(8));
            break;
          case 9:
            v11 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v58);
            v2.add(Integer.valueOf(9));
            break;
          case 10:
            v12 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v58, (android.os.Parcelable.Creator)ko.CREATOR);
            v2.add(Integer.valueOf(10));
            break;
          case 11:
            v61 = (com.google.android.gms.internal.ko)com.google.android.gms.common.internal.safeparcel.a.a(p0, v58, (android.os.Parcelable.Creator)ko.CREATOR);
            v2.add(Integer.valueOf(11));
            v13 = v61;
            break;
          case 12:
            v14 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v58, (android.os.Parcelable.Creator)ko.CREATOR);
            v2.add(Integer.valueOf(12));
            break;
          case 13:
            v15 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(13));
            break;
          case 14:
            v16 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(14));
            break;
          case 15:
            v62 = (com.google.android.gms.internal.ko)com.google.android.gms.common.internal.safeparcel.a.a(p0, v58, (android.os.Parcelable.Creator)ko.CREATOR);
            v2.add(Integer.valueOf(15));
            v17 = v62;
            break;
          case 16:
            v18 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(16));
            break;
          case 17:
            v19 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(17));
            break;
          case 18:
            v20 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(18));
            break;
          case 19:
            v21 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v58, (android.os.Parcelable.Creator)ko.CREATOR);
            v2.add(Integer.valueOf(19));
            break;
          case 20:
            v22 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(20));
            break;
          case 21:
            v23 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(21));
            break;
          case 22:
            v24 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(22));
            break;
          case 23:
            v25 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(23));
            break;
          case 24:
            v26 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(24));
            break;
          case 25:
            v27 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(25));
            break;
          case 26:
            v28 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(26));
            break;
          case 27:
            v29 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(27));
            break;
          case 28:
            v30 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(28));
            break;
          case 29:
            v63 = (com.google.android.gms.internal.ko)com.google.android.gms.common.internal.safeparcel.a.a(p0, v58, (android.os.Parcelable.Creator)ko.CREATOR);
            v2.add(Integer.valueOf(29));
            v31 = v63;
            break;
          case 30:
            v32 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(30));
            break;
          case 31:
            v33 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(31));
            break;
          case 32:
            v34 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(32));
            break;
          case 33:
            v35 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(33));
            break;
          case 34:
            v64 = (com.google.android.gms.internal.ko)com.google.android.gms.common.internal.safeparcel.a.a(p0, v58, (android.os.Parcelable.Creator)ko.CREATOR);
            v2.add(Integer.valueOf(34));
            v36 = v64;
            break;
          case 36:
            v37 = com.google.android.gms.common.internal.safeparcel.a.m(p0, v58);
            v2.add(Integer.valueOf(36));
            break;
          case 37:
            v65 = (com.google.android.gms.internal.ko)com.google.android.gms.common.internal.safeparcel.a.a(p0, v58, (android.os.Parcelable.Creator)ko.CREATOR);
            v2.add(Integer.valueOf(37));
            v38 = v65;
            break;
          case 38:
            v39 = com.google.android.gms.common.internal.safeparcel.a.m(p0, v58);
            v2.add(Integer.valueOf(38));
            break;
          case 39:
            v40 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(39));
            break;
          case 40:
            v66 = (com.google.android.gms.internal.ko)com.google.android.gms.common.internal.safeparcel.a.a(p0, v58, (android.os.Parcelable.Creator)ko.CREATOR);
            v2.add(Integer.valueOf(40));
            v41 = v66;
            break;
          case 41:
            v42 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v58, (android.os.Parcelable.Creator)ko.CREATOR);
            v2.add(Integer.valueOf(41));
            break;
          case 42:
            v43 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(42));
            break;
          case 43:
            v44 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(43));
            break;
          case 44:
            v45 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(44));
            break;
          case 45:
            v46 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(45));
            break;
          case 46:
            v67 = (com.google.android.gms.internal.ko)com.google.android.gms.common.internal.safeparcel.a.a(p0, v58, (android.os.Parcelable.Creator)ko.CREATOR);
            v2.add(Integer.valueOf(46));
            v47 = v67;
            break;
          case 47:
            v48 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(47));
            break;
          case 48:
            v49 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(48));
            break;
          case 49:
            v50 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(49));
            break;
          case 50:
            v68 = (com.google.android.gms.internal.ko)com.google.android.gms.common.internal.safeparcel.a.a(p0, v58, (android.os.Parcelable.Creator)ko.CREATOR);
            v2.add(Integer.valueOf(50));
            v51 = v68;
            break;
          case 51:
            v52 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(51));
            break;
          case 52:
            v53 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(52));
            break;
          case 53:
            v54 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(53));
            break;
          case 54:
            v55 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(54));
            break;
          case 55:
            v56 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(55));
            break;
          case 56:
            v57 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v58);
            v2.add(Integer.valueOf(56));
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v58);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.internal.ko(v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57);
    }

    private static com.google.android.gms.internal.ko[] db(int p0)
    {
      return new com.google.android.gms.internal.ko[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      java.util.Set v3;
      int v4;
      com.google.android.gms.internal.ko v5;
      java.util.ArrayList v6;
      com.google.android.gms.internal.ko v7;
      String v8;
      String v9;
      String v10;
      java.util.ArrayList v11;
      int v12;
      java.util.ArrayList v13;
      com.google.android.gms.internal.ko v14;
      java.util.ArrayList v15;
      String v16;
      String v17;
      com.google.android.gms.internal.ko v18;
      String v19;
      String v20;
      String v21;
      java.util.ArrayList v22;
      String v23;
      String v24;
      String v25;
      String v26;
      String v27;
      String v28;
      String v29;
      String v30;
      String v31;
      com.google.android.gms.internal.ko v32;
      String v33;
      String v34;
      String v35;
      String v36;
      com.google.android.gms.internal.ko v37;
      double v38;
      com.google.android.gms.internal.ko v39;
      double v40;
      String v41;
      com.google.android.gms.internal.ko v42;
      java.util.ArrayList v43;
      String v44;
      String v45;
      String v46;
      String v47;
      com.google.android.gms.internal.ko v48;
      String v49;
      String v50;
      String v51;
      com.google.android.gms.internal.ko v52;
      String v53;
      String v54;
      String v55;
      String v56;
      String v57;
      String v58;
      int v59;
      com.google.android.gms.internal.ko v60;
      com.google.android.gms.internal.ko v61;
      com.google.android.gms.internal.ko v62;
      com.google.android.gms.internal.ko v63;
      com.google.android.gms.internal.ko v64;
      com.google.android.gms.internal.ko v65;
      com.google.android.gms.internal.ko v66;
      com.google.android.gms.internal.ko v67;
      com.google.android.gms.internal.ko v68;
      com.google.android.gms.internal.ko v69;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = new java.util.HashSet();
      v4 = 0;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = null;
      v9 = null;
      v10 = null;
      v11 = null;
      v12 = 0;
      v13 = null;
      v14 = null;
      v15 = null;
      v16 = null;
      v17 = null;
      v18 = null;
      v19 = null;
      v20 = null;
      v21 = null;
      v22 = null;
      v23 = null;
      v24 = null;
      v25 = null;
      v26 = null;
      v27 = null;
      v28 = null;
      v29 = null;
      v30 = null;
      v31 = null;
      v32 = null;
      v33 = null;
      v34 = null;
      v35 = null;
      v36 = null;
      v37 = null;
      v38 = 0.0;
      v39 = null;
      v40 = 0.0;
      v41 = null;
      v42 = null;
      v43 = null;
      v44 = null;
      v45 = null;
      v46 = null;
      v47 = null;
      v48 = null;
      v49 = null;
      v50 = null;
      v51 = null;
      v52 = null;
      v53 = null;
      v54 = null;
      v55 = null;
      v56 = null;
      v57 = null;
      v58 = null;
      while ( p0.dataPosition() < v2 )
      {
        v59 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v59) )
        {
          case 1:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v59);
            v3.add(Integer.valueOf(1));
            break;
          case 2:
            v60 = (com.google.android.gms.internal.ko)com.google.android.gms.common.internal.safeparcel.a.a(p0, v59, (android.os.Parcelable.Creator)ko.CREATOR);
            v3.add(Integer.valueOf(2));
            v5 = v60;
            break;
          case 3:
            v6 = com.google.android.gms.common.internal.safeparcel.a.B(p0, v59);
            v3.add(Integer.valueOf(3));
            break;
          case 4:
            v61 = (com.google.android.gms.internal.ko)com.google.android.gms.common.internal.safeparcel.a.a(p0, v59, (android.os.Parcelable.Creator)ko.CREATOR);
            v3.add(Integer.valueOf(4));
            v7 = v61;
            break;
          case 5:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(5));
            break;
          case 6:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(6));
            break;
          case 7:
            v10 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(7));
            break;
          case 8:
            v11 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v59, (android.os.Parcelable.Creator)ko.CREATOR);
            v3.add(Integer.valueOf(8));
            break;
          case 9:
            v12 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v59);
            v3.add(Integer.valueOf(9));
            break;
          case 10:
            v13 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v59, (android.os.Parcelable.Creator)ko.CREATOR);
            v3.add(Integer.valueOf(10));
            break;
          case 11:
            v62 = (com.google.android.gms.internal.ko)com.google.android.gms.common.internal.safeparcel.a.a(p0, v59, (android.os.Parcelable.Creator)ko.CREATOR);
            v3.add(Integer.valueOf(11));
            v14 = v62;
            break;
          case 12:
            v15 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v59, (android.os.Parcelable.Creator)ko.CREATOR);
            v3.add(Integer.valueOf(12));
            break;
          case 13:
            v16 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(13));
            break;
          case 14:
            v17 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(14));
            break;
          case 15:
            v63 = (com.google.android.gms.internal.ko)com.google.android.gms.common.internal.safeparcel.a.a(p0, v59, (android.os.Parcelable.Creator)ko.CREATOR);
            v3.add(Integer.valueOf(15));
            v18 = v63;
            break;
          case 16:
            v19 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(16));
            break;
          case 17:
            v20 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(17));
            break;
          case 18:
            v21 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(18));
            break;
          case 19:
            v22 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v59, (android.os.Parcelable.Creator)ko.CREATOR);
            v3.add(Integer.valueOf(19));
            break;
          case 20:
            v23 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(20));
            break;
          case 21:
            v24 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(21));
            break;
          case 22:
            v25 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(22));
            break;
          case 23:
            v26 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(23));
            break;
          case 24:
            v27 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(24));
            break;
          case 25:
            v28 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(25));
            break;
          case 26:
            v29 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(26));
            break;
          case 27:
            v30 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(27));
            break;
          case 28:
            v31 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(28));
            break;
          case 29:
            v64 = (com.google.android.gms.internal.ko)com.google.android.gms.common.internal.safeparcel.a.a(p0, v59, (android.os.Parcelable.Creator)ko.CREATOR);
            v3.add(Integer.valueOf(29));
            v32 = v64;
            break;
          case 30:
            v33 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(30));
            break;
          case 31:
            v34 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(31));
            break;
          case 32:
            v35 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(32));
            break;
          case 33:
            v36 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(33));
            break;
          case 34:
            v65 = (com.google.android.gms.internal.ko)com.google.android.gms.common.internal.safeparcel.a.a(p0, v59, (android.os.Parcelable.Creator)ko.CREATOR);
            v3.add(Integer.valueOf(34));
            v37 = v65;
            break;
          case 36:
            v38 = com.google.android.gms.common.internal.safeparcel.a.m(p0, v59);
            v3.add(Integer.valueOf(36));
            break;
          case 37:
            v66 = (com.google.android.gms.internal.ko)com.google.android.gms.common.internal.safeparcel.a.a(p0, v59, (android.os.Parcelable.Creator)ko.CREATOR);
            v3.add(Integer.valueOf(37));
            v39 = v66;
            break;
          case 38:
            v40 = com.google.android.gms.common.internal.safeparcel.a.m(p0, v59);
            v3.add(Integer.valueOf(38));
            break;
          case 39:
            v41 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(39));
            break;
          case 40:
            v67 = (com.google.android.gms.internal.ko)com.google.android.gms.common.internal.safeparcel.a.a(p0, v59, (android.os.Parcelable.Creator)ko.CREATOR);
            v3.add(Integer.valueOf(40));
            v42 = v67;
            break;
          case 41:
            v43 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v59, (android.os.Parcelable.Creator)ko.CREATOR);
            v3.add(Integer.valueOf(41));
            break;
          case 42:
            v44 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(42));
            break;
          case 43:
            v45 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(43));
            break;
          case 44:
            v46 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(44));
            break;
          case 45:
            v47 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(45));
            break;
          case 46:
            v68 = (com.google.android.gms.internal.ko)com.google.android.gms.common.internal.safeparcel.a.a(p0, v59, (android.os.Parcelable.Creator)ko.CREATOR);
            v3.add(Integer.valueOf(46));
            v48 = v68;
            break;
          case 47:
            v49 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(47));
            break;
          case 48:
            v50 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(48));
            break;
          case 49:
            v51 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(49));
            break;
          case 50:
            v69 = (com.google.android.gms.internal.ko)com.google.android.gms.common.internal.safeparcel.a.a(p0, v59, (android.os.Parcelable.Creator)ko.CREATOR);
            v3.add(Integer.valueOf(50));
            v52 = v69;
            break;
          case 51:
            v53 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(51));
            break;
          case 52:
            v54 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(52));
            break;
          case 53:
            v55 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(53));
            break;
          case 54:
            v56 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(54));
            break;
          case 55:
            v57 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(55));
            break;
          case 56:
            v58 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v59);
            v3.add(Integer.valueOf(56));
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v59);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.internal.ko(v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.ko[p0];
    }

}
