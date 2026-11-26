// Decompiled from classes.dex (SourceFile: BackStackState.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.text.TextUtils;
import android.util.Log;
final class BackStackState implements android.os.Parcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int[] a;
    final int b;
    final int c;
    final java.lang.String d;
    final int e;
    final int f;
    final java.lang.CharSequence g;
    final int h;
    final java.lang.CharSequence i;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new android.support.v4.app.BackStackState$1();
    }

    public BackStackState(android.os.Parcel p0)
    {
      super();
      this.a = p0.createIntArray();
      this.b = p0.readInt();
      this.c = p0.readInt();
      this.d = p0.readString();
      this.e = p0.readInt();
      this.f = p0.readInt();
      this.g = (CharSequence)TextUtils.CHAR_SEQUENCE_CREATOR.createFromParcel(p0);
      this.h = p0.readInt();
      this.i = (CharSequence)TextUtils.CHAR_SEQUENCE_CREATOR.createFromParcel(p0);
    }

    public BackStackState(android.support.v4.app.j p0)
    {
      super();
      android.support.v4.app.k k;
      int v3;
      android.support.v4.app.k v4;
      int v5;
      int v6;
      int[] a;
      int v8;
      int mIndex;
      int v10;
      int v11;
      int v12;
      int i;
      k = p0.k;
      v3 = 0;
      while ( k != null )
      {
        if ( k.i != null )
          v3 += k.i.size();
        k = k.a;
      }
      this.a = new int[(v3 + 7 * p0.m)];
      if ( !p0.t )
        throw new IllegalStateException("Not on back stack");
      v4 = p0.k;
      v5 = 0;
      while ( v4 != null )
      {
        v6 = v5 + 1;
        this.a[v5] = v4.c;
        a = this.a;
        v8 = v5 + 2;
        if ( v4.d != null )
          mIndex = v4.d.mIndex;
        else
          mIndex = -1;
        a[v6] = mIndex;
        this.a[v8] = v4.e;
        this.a[v8 + 1] = v4.f;
        this.a[v8 + 2] = v4.g;
        v10 = v8 + 4;
        this.a[v8 + 3] = v4.h;
        if ( v4.i != null )
        {
          v11 = v4.i.size();
          v12 = v8 + 5;
          this.a[v10] = v11;
          for ( i = 0; i < v11; ++i )
            this.a[v12++] = ((android.support.v4.app.Fragment)v4.i.get(i)).mIndex;
          v5 = v12;
        }
        else
        {
          v5 = v8 + 5;
          this.a[v10] = 0;
        }
        v4 = v4.a;
      }
      this.b = p0.r;
      this.c = p0.s;
      this.d = p0.v;
      this.e = p0.x;
      this.f = p0.y;
      this.g = p0.z;
      this.h = p0.A;
      this.i = p0.B;
    
    }

    public final android.support.v4.app.j a(android.support.v4.app.FragmentManagerImpl p0)
    {
      android.support.v4.app.j v2;
      int v3;
      int i;
      android.support.v4.app.k v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;
      int v12;
      int j;
      v2 = new android.support.v4.app.j(p0);
      v3 = 0;
      for ( i = 0; i < this.a.length; i = v11 )
      {
        v5 = new android.support.v4.app.k();
        v6 = i + 1;
        v5.c = this.a[i];
        if ( FragmentManagerImpl.b )
          Log.v("FragmentManager", "Instantiate " + v2 + " op #" + v3 + " base fragment #" + this.a[v6]);
        v7 = i + 2;
        v8 = this.a[v6];
        if ( v8 < 0 )
          v5.d = null;
        else
          v5.d = (android.support.v4.app.Fragment)p0.l.get(v8);
        v5.e = this.a[v7];
        v9 = v7 + 2;
        v5.f = this.a[v6 + 2];
        v5.g = this.a[v9];
        v10 = v9 + 2;
        v5.h = this.a[v9 + 1];
        v11 = v9 + 3;
        v12 = this.a[v10];
        if ( v12 > 0 )
        {
          v5.i = new java.util.ArrayList(v12);
          for ( j = 0; j < v12; ++j )
          {
            if ( FragmentManagerImpl.b )
              Log.v("FragmentManager", "Instantiate " + v2 + " set remove fragment #" + this.a[v11]);
            v5.i.add((android.support.v4.app.Fragment)p0.l.get(this.a[v11++]));
          }
        }
        v2.a(v5);
        ++v3;
      }
      v2.r = this.b;
      v2.s = this.c;
      v2.v = this.d;
      v2.x = this.e;
      v2.t = true;
      v2.y = this.f;
      v2.z = this.g;
      v2.A = this.h;
      v2.B = this.i;
      v2.e(1);
      return v2;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      p0.writeIntArray(this.a);
      p0.writeInt(this.b);
      p0.writeInt(this.c);
      p0.writeString(this.d);
      p0.writeInt(this.e);
      p0.writeInt(this.f);
      TextUtils.writeToParcel(this.g, p0, 0);
      p0.writeInt(this.h);
      TextUtils.writeToParcel(this.i, p0, 0);
    }

}
