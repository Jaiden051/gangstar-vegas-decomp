// Decompiled from classes.dex (SourceFile: Fragment$SavedState.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

public class Fragment$SavedState implements android.os.Parcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final android.os.Bundle a;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new android.support.v4.app.Fragment$SavedState$1();
    }

    Fragment$SavedState(android.os.Bundle p0)
    {
      super();
      this.a = p0;
    }

    Fragment$SavedState(android.os.Parcel p0, ClassLoader p1)
    {
      super();
      this.a = p0.readBundle();
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      p0.writeBundle(this.a);
    }

}
