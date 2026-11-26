// Decompiled from classes.dex (SourceFile: FragmentState.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.util.Log;
final class FragmentState implements android.os.Parcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final java.lang.String a;
    final int b;
    final boolean c;
    final int d;
    final int e;
    final java.lang.String f;
    final boolean g;
    final boolean h;
    final android.os.Bundle i;
    android.os.Bundle j;
    android.support.v4.app.Fragment k;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new android.support.v4.app.FragmentState$1();
    }

    public FragmentState(android.os.Parcel p0)
    {
      super();
      this.a = p0.readString();
      this.b = p0.readInt();
      this.c = p0.readInt() != 0;
      this.d = p0.readInt();
      this.e = p0.readInt();
      this.f = p0.readString();
      this.g = p0.readInt() != 0;
      this.h = p0.readInt() != 0;
      this.i = p0.readBundle();
      this.j = p0.readBundle();
    }

    public FragmentState(android.support.v4.app.Fragment p0)
    {
      super();
      this.a = p0.getClass().getName();
      this.b = p0.mIndex;
      this.c = p0.mFromLayout;
      this.d = p0.mFragmentId;
      this.e = p0.mContainerId;
      this.f = p0.mTag;
      this.g = p0.mRetainInstance;
      this.h = p0.mDetached;
      this.i = p0.mArguments;
    }

    public final android.support.v4.app.Fragment a(
            android.support.v4.app.FragmentActivity p0,
            android.support.v4.app.Fragment p1)
    {
      if ( this.k == null )
      {
        if ( this.i != null )
          this.i.setClassLoader(p0.getClassLoader());
        this.k = Fragment.instantiate(p0, this.a, this.i);
        if ( this.j != null )
        {
          this.j.setClassLoader(p0.getClassLoader());
          this.k.mSavedFragmentState = this.j;
        }
        this.k.setIndex(this.b, p1);
        this.k.mFromLayout = this.c;
        this.k.mRestored = true;
        this.k.mFragmentId = this.d;
        this.k.mContainerId = this.e;
        this.k.mTag = this.f;
        this.k.mRetainInstance = this.g;
        this.k.mDetached = this.h;
        this.k.mFragmentManager = p0.e;
        if ( FragmentManagerImpl.b )
          Log.v("FragmentManager", "Instantiated fragment " + this.k);
      }
      return this.k;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      p0.writeString(this.a);
      p0.writeInt(this.b);
      p0.writeInt(com.gameloft.android.DecompRT.b2i(this.c));
      p0.writeInt(this.d);
      p0.writeInt(this.e);
      p0.writeString(this.f);
      p0.writeInt(com.gameloft.android.DecompRT.b2i(this.g));
      p0.writeInt(com.gameloft.android.DecompRT.b2i(this.h));
      p0.writeBundle(this.i);
      p0.writeBundle(this.j);
    }

}
