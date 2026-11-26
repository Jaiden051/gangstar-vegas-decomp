// Decompiled from classes.dex (SourceFile: FragmentManagerState.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

final class FragmentManagerState implements android.os.Parcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    android.support.v4.app.FragmentState[] a;
    int[] b;
    android.support.v4.app.BackStackState[] c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new android.support.v4.app.FragmentManagerState$1();
    }

    public FragmentManagerState()
    {
      super();
    }

    public FragmentManagerState(android.os.Parcel p0)
    {
      super();
      this.a = (android.support.v4.app.FragmentState[])p0.createTypedArray(FragmentState.CREATOR);
      this.b = p0.createIntArray();
      this.c = (android.support.v4.app.BackStackState[])p0.createTypedArray(BackStackState.CREATOR);
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      p0.writeTypedArray(this.a, p1);
      p0.writeIntArray(this.b);
      p0.writeTypedArray(this.c, p1);
    }

}
