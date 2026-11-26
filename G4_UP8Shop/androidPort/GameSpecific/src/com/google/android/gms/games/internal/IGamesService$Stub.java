// Decompiled from classes.dex (SourceFile: IGamesService$Stub.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

import android.net.Uri;
import android.os.Bundle;
import com.google.android.gms.drive.Contents;
import com.google.android.gms.games.internal.multiplayer.InvitationClusterCreator;
import com.google.android.gms.games.internal.request.GameRequestClusterCreator;
import com.google.android.gms.games.multiplayer.ParticipantEntity;
import com.google.android.gms.games.multiplayer.ParticipantResult;
import com.google.android.gms.games.multiplayer.realtime.RoomEntity;
import com.google.android.gms.games.snapshot.SnapshotMetadataChangeCreator;
public abstract class IGamesService$Stub extends android.os.Binder implements com.google.android.gms.games.internal.IGamesService {
    // Methods
    public IGamesService$Stub()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.games.internal.IGamesService");
    }

    public static com.google.android.gms.games.internal.IGamesService aj(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.games.internal.IGamesService");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.games.internal.IGamesService )
        return (com.google.android.gms.games.internal.IGamesService)LocalInterface;
      else
        return (com.google.android.gms.games.internal.IGamesService)new com.google.android.gms.games.internal.IGamesService$Stub$Proxy(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      Object v5 = null;
      boolean v6 = false;
      boolean v7 = false;
      String v9 = null; // RETVAL
      android.os.Bundle v10 = null; // RETVAL
      android.os.IBinder StrongBinder = null;
      android.os.Bundle v12 = null;
      String v13 = null; // RETVAL
      String v14 = null; // RETVAL
      String v15 = null; // RETVAL
      com.google.android.gms.common.data.DataHolder v16 = null; // RETVAL
      com.google.android.gms.games.internal.IGamesCallbacks v17 = null;
      android.os.Bundle v18 = null;
      com.google.android.gms.games.internal.IGamesCallbacks v19 = null;
      String String = null;
      android.os.IBinder v21 = null;
      android.os.Bundle v22 = null;
      com.google.android.gms.games.internal.IGamesCallbacks v23 = null;
      String v24 = null;
      android.os.IBinder v25 = null;
      android.os.Bundle v26 = null;
      com.google.android.gms.games.internal.IGamesCallbacks v27 = null;
      String v28 = null;
      int Int = 0;
      android.os.IBinder v30 = null;
      android.os.Bundle v31 = null;
      com.google.android.gms.games.internal.IGamesCallbacks v32 = null;
      android.os.IBinder v33 = null;
      int v34 = 0;
      String[] StringArray = null;
      int v36 = 0; // RETVAL
      int v37 = 0; // RETVAL
      String v38 = null; // RETVAL
      com.google.android.gms.games.multiplayer.realtime.RoomEntity v39 = null; // RETVAL
      int v40 = 0; // RETVAL
      boolean v41 = false; // RETVAL
      int v42 = 0;
      com.google.android.gms.games.internal.IGamesCallbacks v43 = null;
      boolean v44 = false;
      android.os.Bundle v45 = null;
      android.net.Uri v46 = null; // RETVAL
      android.net.Uri v47 = null;
      android.os.ParcelFileDescriptor v48 = null; // RETVAL
      com.google.android.gms.games.internal.IGamesCallbacks v49 = null;
      String v50 = null;
      int v51 = 0;
      android.os.IBinder v52 = null;
      android.os.Bundle v53 = null;
      com.google.android.gms.games.internal.IGamesCallbacks v54 = null;
      int v55 = 0;
      int v56 = 0;
      String[] v57 = null;
      android.os.Bundle v58 = null;
      int v59 = 0; // RETVAL
      android.content.Intent v60 = null; // RETVAL
      com.google.android.gms.games.multiplayer.realtime.RoomEntity v61 = null;
      com.google.android.gms.games.multiplayer.ParticipantEntity[] v62 = null;
      String v63 = null;
      String v64 = null;
      android.net.Uri v65 = null;
      android.net.Uri v66 = null;
      int v67 = 0; // RETVAL
      int v68 = 0; // RETVAL
      int v69 = 0; // RETVAL
      com.google.android.gms.games.internal.IGamesCallbacks v70 = null;
      String v71 = null;
      com.google.android.gms.games.snapshot.SnapshotMetadataChange v72 = null;
      com.google.android.gms.drive.Contents v73 = null;
      com.google.android.gms.drive.Contents v74 = null;
      com.google.android.gms.games.internal.IGamesCallbacks v75 = null;
      String v76 = null;
      String v77 = null;
      com.google.android.gms.games.snapshot.SnapshotMetadataChange v78 = null;
      com.google.android.gms.drive.Contents v79 = null;
      int v80 = 0; // RETVAL
      int v81 = 0; // RETVAL
      boolean v82 = false; // RETVAL
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v5 = null;
            v6 = false;
            v7 = true;
            _sw_1 = (p0);
            if ( (_sw_1 == (5001)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (5002)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (5003)) ) { _pc = 3; continue _sm; }
            if ( (_sw_1 == (5004)) ) { _pc = 4; continue _sm; }
            if ( (_sw_1 == (5005)) ) { _pc = 5; continue _sm; }
            if ( (_sw_1 == (5006)) ) { _pc = 6; continue _sm; }
            if ( (_sw_1 == (5007)) ) { _pc = 7; continue _sm; }
            if ( (_sw_1 == (5012)) ) { _pc = 8; continue _sm; }
            if ( (_sw_1 == (5013)) ) { _pc = 9; continue _sm; }
            if ( (_sw_1 == (5014)) ) { _pc = 10; continue _sm; }
            if ( (_sw_1 == (5015)) ) { _pc = 11; continue _sm; }
            if ( (_sw_1 == (5016)) ) { _pc = 12; continue _sm; }
            if ( (_sw_1 == (5017)) ) { _pc = 13; continue _sm; }
            if ( (_sw_1 == (5018)) ) { _pc = 14; continue _sm; }
            if ( (_sw_1 == (5019)) ) { _pc = 15; continue _sm; }
            if ( (_sw_1 == (5020)) ) { _pc = 16; continue _sm; }
            if ( (_sw_1 == (5021)) ) { _pc = 17; continue _sm; }
            if ( (_sw_1 == (5022)) ) { _pc = 18; continue _sm; }
            if ( (_sw_1 == (5023)) ) { _pc = 19; continue _sm; }
            if ( (_sw_1 == (5024)) ) { _pc = 20; continue _sm; }
            if ( (_sw_1 == (5025)) ) { _pc = 21; continue _sm; }
            if ( (_sw_1 == (5026)) ) { _pc = 22; continue _sm; }
            if ( (_sw_1 == (5027)) ) { _pc = 23; continue _sm; }
            if ( (_sw_1 == (5028)) ) { _pc = 24; continue _sm; }
            if ( (_sw_1 == (5029)) ) { _pc = 25; continue _sm; }
            if ( (_sw_1 == (5030)) ) { _pc = 26; continue _sm; }
            if ( (_sw_1 == (5031)) ) { _pc = 27; continue _sm; }
            if ( (_sw_1 == (5032)) ) { _pc = 28; continue _sm; }
            if ( (_sw_1 == (5033)) ) { _pc = 29; continue _sm; }
            if ( (_sw_1 == (5034)) ) { _pc = 30; continue _sm; }
            if ( (_sw_1 == (5035)) ) { _pc = 31; continue _sm; }
            if ( (_sw_1 == (5036)) ) { _pc = 32; continue _sm; }
            if ( (_sw_1 == (5037)) ) { _pc = 33; continue _sm; }
            if ( (_sw_1 == (5038)) ) { _pc = 34; continue _sm; }
            if ( (_sw_1 == (5039)) ) { _pc = 35; continue _sm; }
            if ( (_sw_1 == (5040)) ) { _pc = 36; continue _sm; }
            if ( (_sw_1 == (5041)) ) { _pc = 37; continue _sm; }
            if ( (_sw_1 == (5042)) ) { _pc = 38; continue _sm; }
            if ( (_sw_1 == (5043)) ) { _pc = 39; continue _sm; }
            if ( (_sw_1 == (5044)) ) { _pc = 40; continue _sm; }
            if ( (_sw_1 == (5045)) ) { _pc = 41; continue _sm; }
            if ( (_sw_1 == (5046)) ) { _pc = 42; continue _sm; }
            if ( (_sw_1 == (5047)) ) { _pc = 43; continue _sm; }
            if ( (_sw_1 == (5048)) ) { _pc = 44; continue _sm; }
            if ( (_sw_1 == (5049)) ) { _pc = 45; continue _sm; }
            if ( (_sw_1 == (5050)) ) { _pc = 46; continue _sm; }
            if ( (_sw_1 == (5051)) ) { _pc = 47; continue _sm; }
            if ( (_sw_1 == (5052)) ) { _pc = 48; continue _sm; }
            if ( (_sw_1 == (5053)) ) { _pc = 49; continue _sm; }
            if ( (_sw_1 == (5054)) ) { _pc = 50; continue _sm; }
            if ( (_sw_1 == (5055)) ) { _pc = 51; continue _sm; }
            if ( (_sw_1 == (5056)) ) { _pc = 52; continue _sm; }
            if ( (_sw_1 == (5057)) ) { _pc = 53; continue _sm; }
            if ( (_sw_1 == (5058)) ) { _pc = 54; continue _sm; }
            if ( (_sw_1 == (5059)) ) { _pc = 55; continue _sm; }
            if ( (_sw_1 == (5060)) ) { _pc = 56; continue _sm; }
            if ( (_sw_1 == (5061)) ) { _pc = 57; continue _sm; }
            if ( (_sw_1 == (5062)) ) { _pc = 58; continue _sm; }
            if ( (_sw_1 == (5063)) ) { _pc = 59; continue _sm; }
            if ( (_sw_1 == (5064)) ) { _pc = 60; continue _sm; }
            if ( (_sw_1 == (5065)) ) { _pc = 61; continue _sm; }
            if ( (_sw_1 == (5066)) ) { _pc = 62; continue _sm; }
            if ( (_sw_1 == (5067)) ) { _pc = 63; continue _sm; }
            if ( (_sw_1 == (5068)) ) { _pc = 64; continue _sm; }
            if ( (_sw_1 == (5501)) ) { _pc = 65; continue _sm; }
            if ( (_sw_1 == (5502)) ) { _pc = 66; continue _sm; }
            if ( (_sw_1 == (6001)) ) { _pc = 68; continue _sm; }
            if ( (_sw_1 == (6002)) ) { _pc = 69; continue _sm; }
            if ( (_sw_1 == (6003)) ) { _pc = 70; continue _sm; }
            if ( (_sw_1 == (6004)) ) { _pc = 71; continue _sm; }
            if ( (_sw_1 == (6501)) ) { _pc = 72; continue _sm; }
            if ( (_sw_1 == (6502)) ) { _pc = 73; continue _sm; }
            if ( (_sw_1 == (6503)) ) { _pc = 74; continue _sm; }
            if ( (_sw_1 == (6504)) ) { _pc = 75; continue _sm; }
            if ( (_sw_1 == (6505)) ) { _pc = 76; continue _sm; }
            if ( (_sw_1 == (6506)) ) { _pc = 77; continue _sm; }
            if ( (_sw_1 == (6507)) ) { _pc = 78; continue _sm; }
            if ( (_sw_1 == (7001)) ) { _pc = 79; continue _sm; }
            if ( (_sw_1 == (7002)) ) { _pc = 80; continue _sm; }
            if ( (_sw_1 == (7003)) ) { _pc = 81; continue _sm; }
            if ( (_sw_1 == (8001)) ) { _pc = 82; continue _sm; }
            if ( (_sw_1 == (8002)) ) { _pc = 83; continue _sm; }
            if ( (_sw_1 == (8003)) ) { _pc = 84; continue _sm; }
            if ( (_sw_1 == (8004)) ) { _pc = 85; continue _sm; }
            if ( (_sw_1 == (8005)) ) { _pc = 86; continue _sm; }
            if ( (_sw_1 == (8006)) ) { _pc = 87; continue _sm; }
            if ( (_sw_1 == (8007)) ) { _pc = 88; continue _sm; }
            if ( (_sw_1 == (8008)) ) { _pc = 89; continue _sm; }
            if ( (_sw_1 == (8009)) ) { _pc = 90; continue _sm; }
            if ( (_sw_1 == (8010)) ) { _pc = 91; continue _sm; }
            if ( (_sw_1 == (8011)) ) { _pc = 92; continue _sm; }
            if ( (_sw_1 == (8012)) ) { _pc = 93; continue _sm; }
            if ( (_sw_1 == (8013)) ) { _pc = 94; continue _sm; }
            if ( (_sw_1 == (8014)) ) { _pc = 95; continue _sm; }
            if ( (_sw_1 == (8015)) ) { _pc = 96; continue _sm; }
            if ( (_sw_1 == (8016)) ) { _pc = 97; continue _sm; }
            if ( (_sw_1 == (8017)) ) { _pc = 98; continue _sm; }
            if ( (_sw_1 == (8018)) ) { _pc = 99; continue _sm; }
            if ( (_sw_1 == (8019)) ) { _pc = 100; continue _sm; }
            if ( (_sw_1 == (8020)) ) { _pc = 101; continue _sm; }
            if ( (_sw_1 == (8021)) ) { _pc = 102; continue _sm; }
            if ( (_sw_1 == (8022)) ) { _pc = 103; continue _sm; }
            if ( (_sw_1 == (8023)) ) { _pc = 104; continue _sm; }
            if ( (_sw_1 == (8024)) ) { _pc = 105; continue _sm; }
            if ( (_sw_1 == (8025)) ) { _pc = 106; continue _sm; }
            if ( (_sw_1 == (8026)) ) { _pc = 107; continue _sm; }
            if ( (_sw_1 == (8027)) ) { _pc = 108; continue _sm; }
            if ( (_sw_1 == (9001)) ) { _pc = 109; continue _sm; }
            if ( (_sw_1 == (9002)) ) { _pc = 110; continue _sm; }
            if ( (_sw_1 == (9003)) ) { _pc = 111; continue _sm; }
            if ( (_sw_1 == (9004)) ) { _pc = 112; continue _sm; }
            if ( (_sw_1 == (9005)) ) { _pc = 113; continue _sm; }
            if ( (_sw_1 == (9006)) ) { _pc = 114; continue _sm; }
            if ( (_sw_1 == (9007)) ) { _pc = 115; continue _sm; }
            if ( (_sw_1 == (9008)) ) { _pc = 116; continue _sm; }
            if ( (_sw_1 == (9009)) ) { _pc = 117; continue _sm; }
            if ( (_sw_1 == (9010)) ) { _pc = 118; continue _sm; }
            if ( (_sw_1 == (9011)) ) { _pc = 119; continue _sm; }
            if ( (_sw_1 == (9012)) ) { _pc = 120; continue _sm; }
            if ( (_sw_1 == (9013)) ) { _pc = 121; continue _sm; }
            if ( (_sw_1 == (9019)) ) { _pc = 122; continue _sm; }
            if ( (_sw_1 == (9020)) ) { _pc = 123; continue _sm; }
            if ( (_sw_1 == (9028)) ) { _pc = 124; continue _sm; }
            if ( (_sw_1 == (9030)) ) { _pc = 125; continue _sm; }
            if ( (_sw_1 == (9031)) ) { _pc = 127; continue _sm; }
            if ( (_sw_1 == (10001)) ) { _pc = 128; continue _sm; }
            if ( (_sw_1 == (10002)) ) { _pc = 129; continue _sm; }
            if ( (_sw_1 == (10003)) ) { _pc = 130; continue _sm; }
            if ( (_sw_1 == (10004)) ) { _pc = 131; continue _sm; }
            if ( (_sw_1 == (10005)) ) { _pc = 132; continue _sm; }
            if ( (_sw_1 == (10006)) ) { _pc = 133; continue _sm; }
            if ( (_sw_1 == (10007)) ) { _pc = 134; continue _sm; }
            if ( (_sw_1 == (10008)) ) { _pc = 135; continue _sm; }
            if ( (_sw_1 == (10009)) ) { _pc = 136; continue _sm; }
            if ( (_sw_1 == (10010)) ) { _pc = 137; continue _sm; }
            if ( (_sw_1 == (10011)) ) { _pc = 138; continue _sm; }
            if ( (_sw_1 == (10012)) ) { _pc = 139; continue _sm; }
            if ( (_sw_1 == (10013)) ) { _pc = 140; continue _sm; }
            if ( (_sw_1 == (10014)) ) { _pc = 141; continue _sm; }
            if ( (_sw_1 == (10015)) ) { _pc = 142; continue _sm; }
            if ( (_sw_1 == (10016)) ) { _pc = 143; continue _sm; }
            if ( (_sw_1 == (10017)) ) { _pc = 144; continue _sm; }
            if ( (_sw_1 == (10018)) ) { _pc = 145; continue _sm; }
            if ( (_sw_1 == (10019)) ) { _pc = 146; continue _sm; }
            if ( (_sw_1 == (10020)) ) { _pc = 147; continue _sm; }
            if ( (_sw_1 == (10021)) ) { _pc = 148; continue _sm; }
            if ( (_sw_1 == (10022)) ) { _pc = 149; continue _sm; }
            if ( (_sw_1 == (10023)) ) { _pc = 150; continue _sm; }
            if ( (_sw_1 == (11001)) ) { _pc = 151; continue _sm; }
            if ( (_sw_1 == (11002)) ) { _pc = 152; continue _sm; }
            if ( (_sw_1 == (12001)) ) { _pc = 153; continue _sm; }
            if ( (_sw_1 == (12002)) ) { _pc = 154; continue _sm; }
            if ( (_sw_1 == (12003)) ) { _pc = 155; continue _sm; }
            if ( (_sw_1 == (12005)) ) { _pc = 156; continue _sm; }
            if ( (_sw_1 == (12006)) ) { _pc = 157; continue _sm; }
            if ( (_sw_1 == (12007)) ) { _pc = 158; continue _sm; }
            if ( (_sw_1 == (12008)) ) { _pc = 159; continue _sm; }
            if ( (_sw_1 == (12009)) ) { _pc = 160; continue _sm; }
            if ( (_sw_1 == (12010)) ) { _pc = 161; continue _sm; }
            if ( (_sw_1 == (12011)) ) { _pc = 162; continue _sm; }
            if ( (_sw_1 == (12012)) ) { _pc = 163; continue _sm; }
            if ( (_sw_1 == (12013)) ) { _pc = 164; continue _sm; }
            if ( (_sw_1 == (12014)) ) { _pc = 165; continue _sm; }
            if ( (_sw_1 == (12015)) ) { _pc = 166; continue _sm; }
            if ( (_sw_1 == (12016)) ) { _pc = 167; continue _sm; }
            if ( (_sw_1 == (12017)) ) { _pc = 168; continue _sm; }
            if ( (_sw_1 == (12018)) ) { _pc = 169; continue _sm; }
            if ( (_sw_1 == (12019)) ) { _pc = 170; continue _sm; }
            if ( (_sw_1 == (12020)) ) { _pc = 171; continue _sm; }
            if ( (_sw_1 == (12021)) ) { _pc = 172; continue _sm; }
            if ( (_sw_1 == (12022)) ) { _pc = 173; continue _sm; }
            if ( (_sw_1 == (12023)) ) { _pc = 174; continue _sm; }
            if ( (_sw_1 == (12024)) ) { _pc = 175; continue _sm; }
            if ( (_sw_1 == (12025)) ) { _pc = 176; continue _sm; }
            if ( (_sw_1 == (12026)) ) { _pc = 178; continue _sm; }
            if ( (_sw_1 == (12027)) ) { _pc = 179; continue _sm; }
            if ( (_sw_1 == (12028)) ) { _pc = 180; continue _sm; }
            if ( (_sw_1 == (12029)) ) { _pc = 181; continue _sm; }
            if ( (_sw_1 == (12030)) ) { _pc = 182; continue _sm; }
            if ( (_sw_1 == (12031)) ) { _pc = 183; continue _sm; }
            if ( (_sw_1 == (12032)) ) { _pc = 184; continue _sm; }
            if ( (_sw_1 == (12033)) ) { _pc = 185; continue _sm; }
            if ( (_sw_1 == (12034)) ) { _pc = 186; continue _sm; }
            if ( (_sw_1 == (12035)) ) { _pc = 190; continue _sm; }
            if ( (_sw_1 == (12036)) ) { _pc = 191; continue _sm; }
            if ( (_sw_1 == (1598968902)) ) { _pc = 192; continue _sm; }
            _pc = 193;
            continue _sm;
          case 1:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(p1.readLong());
            p2.writeNoException();
            return v7;
          case 2:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()));
            p2.writeNoException();
            return v7;
          case 3:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v9 = this.a();
            p2.writeNoException();
            p2.writeString(v9);
            return v7;
          case 4:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v10 = this.b();
            p2.writeNoException();
            if ( v10 == null )
            { _pc = 188; continue _sm; }
            p2.writeInt(1);
            v10.writeToParcel(p2, 1);
            return v7;
          case 5:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            StrongBinder = p1.readStrongBinder();
            if ( p1.readInt() != 0 )
            v12 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
            else
            v12 = null;
            this.a(StrongBinder, v12);
            p2.writeNoException();
            return v7;
          case 6:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.c();
            p2.writeNoException();
            return v7;
          case 7:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v13 = this.d();
            p2.writeNoException();
            p2.writeString(v13);
            return v7;
          case 8:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v15 = this.e();
            p2.writeNoException();
            p2.writeString(v15);
            return v7;
          case 9:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v16 = this.f();
            p2.writeNoException();
            if ( v16 == null )
            { _pc = 188; continue _sm; }
            _pc = 67;
            continue _sm;
          case 10:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v7;
          case 11:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readInt(), p1.readInt() != 0, p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 12:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readLong());
            p2.writeNoException();
            return v7;
          case 13:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.b(IGamesCallbacks$Stub.ai(p1.readStrongBinder()));
            p2.writeNoException();
            return v7;
          case 14:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.b(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v7;
          case 15:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readInt(), p1.readInt(), p1.readInt(), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 16:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.b(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readInt(), p1.readInt(), p1.readInt(), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 17:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v17 = IGamesCallbacks$Stub.ai(p1.readStrongBinder());
            if ( p1.readInt() != 0 )
            v18 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
            else
            v18 = null;
            this.a(v17, v18, p1.readInt(), p1.readInt());
            p2.writeNoException();
            return v7;
          case 18:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.c(IGamesCallbacks$Stub.ai(p1.readStrongBinder()));
            p2.writeNoException();
            return v7;
          case 19:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v19 = IGamesCallbacks$Stub.ai(p1.readStrongBinder());
            String = p1.readString();
            v21 = p1.readStrongBinder();
            if ( p1.readInt() != 0 )
            v22 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
            else
            v22 = null;
            this.a(v19, String, v21, v22);
            p2.writeNoException();
            return v7;
          case 20:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v23 = IGamesCallbacks$Stub.ai(p1.readStrongBinder());
            v24 = p1.readString();
            v25 = p1.readStrongBinder();
            if ( p1.readInt() != 0 )
            v26 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
            else
            v26 = null;
            this.b(v23, v24, v25, v26);
            p2.writeNoException();
            return v7;
          case 21:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v27 = IGamesCallbacks$Stub.ai(p1.readStrongBinder());
            v28 = p1.readString();
            Int = p1.readInt();
            v30 = p1.readStrongBinder();
            if ( p1.readInt() != 0 )
            v31 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
            else
            v31 = null;
            this.a(v27, v28, Int, v30, v31);
            p2.writeNoException();
            return v7;
          case 22:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.d(IGamesCallbacks$Stub.ai(p1.readStrongBinder()));
            p2.writeNoException();
            return v7;
          case 23:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.e(IGamesCallbacks$Stub.ai(p1.readStrongBinder()));
            p2.writeNoException();
            return v7;
          case 24:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(p1.readString(), p1.readInt());
            p2.writeNoException();
            return v7;
          case 25:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.b(p1.readString(), p1.readInt());
            p2.writeNoException();
            return v7;
          case 26:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v32 = IGamesCallbacks$Stub.ai(p1.readStrongBinder());
            v33 = p1.readStrongBinder();
            v34 = p1.readInt();
            StringArray = p1.createStringArray();
            if ( p1.readInt() != 0 )
            v5 = Bundle.CREATOR.createFromParcel(p1);
            if ( p1.readInt() != 0 )
            v6 = true;
            this.a(v32, v33, v34, StringArray, (android.os.Bundle)v5, v6, p1.readLong());
            p2.writeNoException();
            return v7;
          case 27:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readStrongBinder(), p1.readString(), p1.readInt() != 0, p1.readLong());
            p2.writeNoException();
            return v7;
          case 28:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.c(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v7;
          case 29:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v36 = this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.createByteArray(), p1.readString(), p1.readString());
            p2.writeNoException();
            p2.writeInt(v36);
            return v7;
          case 30:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v37 = this.a(p1.createByteArray(), p1.readString(), p1.createStringArray());
            p2.writeNoException();
            p2.writeInt(v37);
            return v7;
          case 31:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v38 = this.b(p1.readString());
            p2.writeNoException();
            p2.writeString(v38);
            return v7;
          case 32:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(p1.readInt());
            p2.writeNoException();
            return v7;
          case 33:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.d(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v7;
          case 34:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readString());
            p2.writeNoException();
            return v7;
          case 35:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readString(), p1.readInt(), p1.readInt(), p1.readInt(), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 36:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.b(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readString(), p1.readInt(), p1.readInt(), p1.readInt(), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 37:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.b(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readString());
            p2.writeNoException();
            return v7;
          case 38:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.e(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v7;
          case 39:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.f(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v7;
          case 40:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readInt(), p1.readInt(), p1.readInt() != 0, p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 41:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readInt(), p1.readInt() != 0, p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 42:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.b(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readInt(), p1.readInt() != 0, p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 43:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.f(IGamesCallbacks$Stub.ai(p1.readStrongBinder()));
            p2.writeNoException();
            return v7;
          case 44:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.c(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readInt(), p1.readInt() != 0, p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 45:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.g(IGamesCallbacks$Stub.ai(p1.readStrongBinder()));
            p2.writeNoException();
            return v7;
          case 46:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.c(p1.readString());
            p2.writeNoException();
            return v7;
          case 47:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(p1.readString(), p1.readString(), p1.readInt());
            p2.writeNoException();
            return v7;
          case 48:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.g(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v7;
          case 49:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v39 = this.h(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            if ( v39 == null )
            { _pc = 188; continue _sm; }
            p2.writeInt(1);
            v39.writeToParcel(p2, 1);
            return v7;
          case 50:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 51:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.c(p1.readString(), p1.readInt());
            p2.writeNoException();
            return v7;
          case 52:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.h(IGamesCallbacks$Stub.ai(p1.readStrongBinder()));
            p2.writeNoException();
            return v7;
          case 53:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.j(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v7;
          case 54:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readLong());
            p2.writeNoException();
            return v7;
          case 55:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.b(p1.readLong());
            p2.writeNoException();
            return v7;
          case 56:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v40 = this.d(p1.readString());
            p2.writeNoException();
            p2.writeInt(v40);
            return v7;
          case 57:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.i(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v7;
          case 58:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.i(IGamesCallbacks$Stub.ai(p1.readStrongBinder()));
            p2.writeNoException();
            return v7;
          case 59:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v43 = IGamesCallbacks$Stub.ai(p1.readStrongBinder());
            v44 = p1.readInt() != 0;
            if ( p1.readInt() != 0 )
            v45 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
            else
            v45 = null;
            this.a(v43, v44, v45);
            p2.writeNoException();
            return v7;
          case 60:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v14 = this.a(p1.readString());
            p2.writeNoException();
            p2.writeString(v14);
            return v7;
          case 61:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(p1.readString(), p1.readString());
            p2.writeNoException();
            return v7;
          case 62:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v46 = this.e(p1.readString());
            p2.writeNoException();
            if ( v46 == null )
            { _pc = 188; continue _sm; }
            p2.writeInt(1);
            v46.writeToParcel(p2, 1);
            return v7;
          case 63:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v41 = this.g();
            p2.writeNoException();
            v42 = v41 ? 1 : 0;
            _pc = 177;
            continue _sm;
          case 64:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 65:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.b(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readInt(), p1.readInt() != 0, p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 66:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v16 = this.h();
            p2.writeNoException();
            if ( v16 == null )
            { _pc = 188; continue _sm; }
            _pc = 67;
            continue _sm;
          case 67:
            p2.writeInt(1);
            v16.writeToParcel(p2, 1);
            return v7;
          case 68:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 69:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readString(), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 70:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.d(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readInt(), p1.readInt() != 0, p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 71:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.e(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readInt(), p1.readInt() != 0, p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 72:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readInt(), p1.readInt() != 0, p1.readInt() != 0, p1.readInt() != 0, p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 73:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.b(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 74:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.b(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 75:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.c(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 76:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.d(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 77:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.b(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readString(), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 78:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            if ( p1.readInt() != 0 )
            v47 = (android.net.Uri)android.net.Uri.CREATOR.createFromParcel(p1);
            else
            v47 = null;
            v48 = this.a(v47);
            p2.writeNoException();
            if ( v48 != null )
            { _pc = 126; continue _sm; }
            _pc = 188;
            continue _sm;
          case 79:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.k(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v7;
          case 80:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readLong(), p1.readString());
            p2.writeNoException();
            return v7;
          case 81:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v49 = IGamesCallbacks$Stub.ai(p1.readStrongBinder());
            v50 = p1.readString();
            v51 = p1.readInt();
            v52 = p1.readStrongBinder();
            if ( p1.readInt() != 0 )
            v53 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
            else
            v53 = null;
            this.b(v49, v50, v51, v52, v53);
            p2.writeNoException();
            return v7;
          case 82:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readString(), p1.readInt(), p1.readInt());
            p2.writeNoException();
            return v7;
          case 83:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.f(p1.readString());
            p2.writeNoException();
            return v7;
          case 84:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.createIntArray());
            p2.writeNoException();
            return v7;
          case 85:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v54 = IGamesCallbacks$Stub.ai(p1.readStrongBinder());
            v55 = p1.readInt();
            v56 = p1.readInt();
            v57 = p1.createStringArray();
            if ( p1.readInt() != 0 )
            v58 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
            else
            v58 = null;
            this.a(v54, v55, v56, v57, v58);
            p2.writeNoException();
            return v7;
          case 86:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.l(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v7;
          case 87:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.m(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v7;
          case 88:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.createByteArray(), p1.readString(), (com.google.android.gms.games.multiplayer.ParticipantResult[])p1.createTypedArray((android.os.Parcelable.Creator)ParticipantResult.CREATOR));
            p2.writeNoException();
            return v7;
          case 89:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.createByteArray(), (com.google.android.gms.games.multiplayer.ParticipantResult[])p1.createTypedArray((android.os.Parcelable.Creator)ParticipantResult.CREATOR));
            p2.writeNoException();
            return v7;
          case 90:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.n(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v7;
          case 91:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.o(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v7;
          case 92:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.c(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readString());
            p2.writeNoException();
            return v7;
          case 93:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.b(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readLong());
            p2.writeNoException();
            return v7;
          case 94:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.c(p1.readLong());
            p2.writeNoException();
            return v7;
          case 95:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.p(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v7;
          case 96:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.d(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readString());
            p2.writeNoException();
            return v7;
          case 97:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.e(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readString());
            p2.writeNoException();
            return v7;
          case 98:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.createIntArray());
            p2.writeNoException();
            return v7;
          case 99:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readLong(), p1.readString());
            p2.writeNoException();
            return v7;
          case 100:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(p1.readLong(), p1.readString());
            p2.writeNoException();
            return v7;
          case 101:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.b(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readLong(), p1.readString());
            p2.writeNoException();
            return v7;
          case 102:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.b(p1.readLong(), p1.readString());
            p2.writeNoException();
            return v7;
          case 103:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.j();
            p2.writeNoException();
            return v7;
          case 104:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readInt(), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 105:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v59 = this.i();
            p2.writeNoException();
            p2.writeInt(v59);
            return v7;
          case 106:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.b(p1.readString(), p1.readString());
            p2.writeNoException();
            return v7;
          case 107:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.b(p1.readString(), p1.readString(), p1.readInt());
            p2.writeNoException();
            return v7;
          case 108:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.c(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 109:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.c(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readInt(), p1.readInt() != 0, p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 110:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.q(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v7;
          case 111:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v60 = this.k();
            p2.writeNoException();
            if ( v60 != null )
            { _pc = 187; continue _sm; }
            _pc = 188;
            continue _sm;
          case 112:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v60 = this.g(p1.readString());
            p2.writeNoException();
            if ( v60 == null )
            { _pc = 188; continue _sm; }
            _pc = 187;
            continue _sm;
          case 113:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v60 = this.l();
            p2.writeNoException();
            if ( v60 == null )
            { _pc = 188; continue _sm; }
            _pc = 187;
            continue _sm;
          case 114:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v60 = this.m();
            p2.writeNoException();
            if ( v60 != null )
            { _pc = 187; continue _sm; }
            _pc = 188;
            continue _sm;
          case 115:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v60 = this.n();
            p2.writeNoException();
            if ( v60 == null )
            { _pc = 188; continue _sm; }
            _pc = 187;
            continue _sm;
          case 116:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v60 = this.a(p1.readInt(), p1.readInt(), p1.readInt() != 0);
            p2.writeNoException();
            if ( v60 != null )
            { _pc = 187; continue _sm; }
            _pc = 188;
            continue _sm;
          case 117:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v60 = this.b(p1.readInt(), p1.readInt(), p1.readInt() != 0);
            p2.writeNoException();
            if ( v60 == null )
            { _pc = 188; continue _sm; }
            _pc = 187;
            continue _sm;
          case 118:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v60 = this.o();
            p2.writeNoException();
            if ( v60 == null )
            { _pc = 188; continue _sm; }
            _pc = 187;
            continue _sm;
          case 119:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            if ( p1.readInt() != 0 )
            v61 = (com.google.android.gms.games.multiplayer.realtime.RoomEntity)com.google.android.gms.games.multiplayer.realtime.RoomEntity.CREATOR.createFromParcel(p1);
            else
            v61 = null;
            v60 = this.a(v61, p1.readInt());
            p2.writeNoException();
            if ( v60 != null )
            { _pc = 187; continue _sm; }
            _pc = 188;
            continue _sm;
          case 120:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v60 = this.p();
            p2.writeNoException();
            if ( v60 == null )
            { _pc = 188; continue _sm; }
            _pc = 187;
            continue _sm;
          case 121:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v60 = this.q();
            p2.writeNoException();
            if ( v60 != null )
            { _pc = 187; continue _sm; }
            _pc = 188;
            continue _sm;
          case 122:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v67 = this.r();
            p2.writeNoException();
            p2.writeInt(v67);
            return v7;
          case 123:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.d(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readInt(), p1.readInt() != 0, p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 124:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readString(), p1.readInt(), p1.readInt() != 0, p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 125:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v48 = this.h(p1.readString());
            p2.writeNoException();
            if ( v48 == null )
            { _pc = 188; continue _sm; }
            _pc = 126;
            continue _sm;
          case 126:
            p2.writeInt(1);
            v48.writeToParcel(p2, 1);
            return v7;
          case 127:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v62 = (com.google.android.gms.games.multiplayer.ParticipantEntity[])p1.createTypedArray(ParticipantEntity.CREATOR);
            v63 = p1.readString();
            v64 = p1.readString();
            if ( p1.readInt() != 0 )
            v65 = (android.net.Uri)android.net.Uri.CREATOR.createFromParcel(p1);
            else
            v65 = null;
            if ( p1.readInt() != 0 )
            v66 = (android.net.Uri)android.net.Uri.CREATOR.createFromParcel(p1);
            else
            v66 = null;
            v60 = this.a(v62, v63, v64, v65, v66);
            p2.writeNoException();
            if ( v60 != null )
            { _pc = 187; continue _sm; }
            _pc = 188;
            continue _sm;
          case 128:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.c(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readLong());
            p2.writeNoException();
            return v7;
          case 129:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.d(p1.readLong());
            p2.writeNoException();
            return v7;
          case 130:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.c(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readLong(), p1.readString());
            p2.writeNoException();
            return v7;
          case 131:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.c(p1.readLong(), p1.readString());
            p2.writeNoException();
            return v7;
          case 132:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.createStringArray(), p1.readInt(), p1.createByteArray(), p1.readInt());
            p2.writeNoException();
            return v7;
          case 133:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.createStringArray());
            p2.writeNoException();
            return v7;
          case 134:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.b(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.createStringArray());
            p2.writeNoException();
            return v7;
          case 135:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readString(), p1.createStringArray());
            p2.writeNoException();
            return v7;
          case 136:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readInt(), p1.readInt(), p1.readInt());
            p2.writeNoException();
            return v7;
          case 137:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readString(), p1.readInt(), p1.readInt(), p1.readInt());
            p2.writeNoException();
            return v7;
          case 138:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readInt());
            p2.writeNoException();
            return v7;
          case 139:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v60 = this.a(p1.readInt(), p1.createByteArray(), p1.readInt(), p1.readString());
            p2.writeNoException();
            if ( v60 == null )
            { _pc = 188; continue _sm; }
            _pc = 187;
            continue _sm;
          case 140:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v68 = this.s();
            p2.writeNoException();
            p2.writeInt(v68);
            return v7;
          case 141:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.d(p1.readString(), p1.readInt());
            p2.writeNoException();
            return v7;
          case 142:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v60 = this.u();
            p2.writeNoException();
            if ( v60 != null )
            { _pc = 187; continue _sm; }
            _pc = 188;
            continue _sm;
          case 143:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readInt());
            p2.writeNoException();
            return v7;
          case 144:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.b(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readInt(), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 145:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readInt(), p1.createIntArray());
            p2.writeNoException();
            return v7;
          case 146:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readInt(), p1.createIntArray());
            p2.writeNoException();
            return v7;
          case 147:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.c(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.createStringArray());
            p2.writeNoException();
            return v7;
          case 148:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            if ( p1.readInt() != 0 )
            v5 = InvitationClusterCreator.bi(p1);
            v60 = this.a((com.google.android.gms.games.internal.multiplayer.ZInvitationCluster)v5, p1.readString(), p1.readString());
            p2.writeNoException();
            if ( v60 != null )
            { _pc = 187; continue _sm; }
            _pc = 188;
            continue _sm;
          case 149:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            if ( p1.readInt() != 0 )
            v5 = GameRequestClusterCreator.bk(p1);
            v60 = this.a((com.google.android.gms.games.internal.request.GameRequestCluster)v5, p1.readString());
            p2.writeNoException();
            if ( v60 == null )
            { _pc = 188; continue _sm; }
            _pc = 187;
            continue _sm;
          case 150:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v69 = this.t();
            p2.writeNoException();
            p2.writeInt(v69);
            return v7;
          case 151:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.j(IGamesCallbacks$Stub.ai(p1.readStrongBinder()));
            p2.writeNoException();
            return v7;
          case 152:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.v();
            p2.writeNoException();
            return v7;
          case 153:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v60 = this.a(p1.readString(), p1.readInt() != 0, p1.readInt() != 0, p1.readInt());
            p2.writeNoException();
            if ( v60 == null )
            { _pc = 188; continue _sm; }
            _pc = 187;
            continue _sm;
          case 154:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.d(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 155:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.c(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readString(), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 156:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.s(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v7;
          case 157:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.e(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 158:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v70 = IGamesCallbacks$Stub.ai(p1.readStrongBinder());
            v71 = p1.readString();
            if ( p1.readInt() != 0 )
            v72 = SnapshotMetadataChangeCreator._typed_createFromParcel(p1);
            else
            v72 = null;
            if ( p1.readInt() != 0 )
            v73 = (com.google.android.gms.drive.Contents)com.google.android.gms.drive.Contents.CREATOR.createFromParcel(p1);
            else
            v73 = null;
            this.a(v70, v71, v72, v73);
            p2.writeNoException();
            return v7;
          case 159:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.u(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v7;
          case 160:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.f(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readString());
            p2.writeNoException();
            return v7;
          case 161:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.createIntArray(), p1.readInt(), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 162:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.d(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readLong());
            p2.writeNoException();
            return v7;
          case 163:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.e(p1.readLong());
            p2.writeNoException();
            return v7;
          case 164:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.d(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readLong(), p1.readString());
            p2.writeNoException();
            return v7;
          case 165:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.d(p1.readLong(), p1.readString());
            p2.writeNoException();
            return v7;
          case 166:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readString(), p1.createIntArray(), p1.readInt(), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 167:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.f(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 168:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.e(p1.readString(), p1.readInt());
            p2.writeNoException();
            return v7;
          case 169:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.b(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readString(), p1.readInt(), p1.readInt() != 0, p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 170:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            if ( p1.readInt() != 0 )
            v74 = (com.google.android.gms.drive.Contents)com.google.android.gms.drive.Contents.CREATOR.createFromParcel(p1);
            else
            v74 = null;
            this.a(v74);
            p2.writeNoException();
            return v7;
          case 171:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.r(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v7;
          case 172:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.e(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readInt(), p1.readInt() != 0, p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 173:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.f(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readInt(), p1.readInt() != 0, p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 174:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.b(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readInt());
            p2.writeNoException();
            return v7;
          case 175:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.c(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readInt());
            p2.writeNoException();
            return v7;
          case 176:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v82 = this.y();
            p2.writeNoException();
            v42 = v82 ? 1 : 0;
            _pc = 177;
            continue _sm;
          case 177:
            p2.writeInt(v42);
            return v7;
          case 178:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.b(p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 179:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.t(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v7;
          case 180:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readString(), p1.readString(), p1.createStringArray(), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 181:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.createStringArray(), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 182:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v60 = this.a(p1.createIntArray());
            p2.writeNoException();
            if ( v60 == null )
            { _pc = 188; continue _sm; }
            _pc = 187;
            continue _sm;
          case 183:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.a(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readInt() != 0, p1.createStringArray());
            p2.writeNoException();
            return v7;
          case 184:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            this.e(IGamesCallbacks$Stub.ai(p1.readStrongBinder()), p1.readInt() != 0);
            p2.writeNoException();
            return v7;
          case 185:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v75 = IGamesCallbacks$Stub.ai(p1.readStrongBinder());
            v76 = p1.readString();
            v77 = p1.readString();
            if ( p1.readInt() != 0 )
            v78 = SnapshotMetadataChangeCreator._typed_createFromParcel(p1);
            else
            v78 = null;
            if ( p1.readInt() != 0 )
            v79 = (com.google.android.gms.drive.Contents)com.google.android.gms.drive.Contents.CREATOR.createFromParcel(p1);
            else
            v79 = null;
            this.a(v75, v76, v77, v78, v79);
            p2.writeNoException();
            return v7;
          case 186:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v60 = this.i(p1.readString());
            p2.writeNoException();
            if ( !(v60 != null) ) { _pc = 188; continue _sm; }
            _pc = 187;
            continue _sm;
          case 187:
            p2.writeInt(1);
            v60.writeToParcel(p2, 1);
            _pc = 189;
            continue _sm;
          case 188:
            p2.writeInt(0);
            _pc = 189;
            continue _sm;
          case 189:
            _pc = 194;
            continue _sm;
          case 190:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v80 = this.w();
            p2.writeNoException();
            p2.writeInt(v80);
            _pc = 194;
            continue _sm;
          case 191:
            p1.enforceInterface("com.google.android.gms.games.internal.IGamesService");
            v81 = this.x();
            p2.writeNoException();
            p2.writeInt(v81);
            _pc = 194;
            continue _sm;
          case 192:
            p2.writeString("com.google.android.gms.games.internal.IGamesService");
            _pc = 194;
            continue _sm;
          case 193:
            v7 = super.onTransact(p0, p1, p2, p3);
            _pc = 194;
            continue _sm;
          case 194:
            return v7;
        }
      }
}

}
