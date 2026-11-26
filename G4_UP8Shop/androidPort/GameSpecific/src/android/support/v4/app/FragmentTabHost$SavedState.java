// Decompiled from classes.dex (SourceFile: FragmentTabHost$SavedState.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

class FragmentTabHost$SavedState extends android.view.View.BaseSavedState {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    java.lang.String a;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new android.support.v4.app.FragmentTabHost$SavedState$1();
    }

    private FragmentTabHost$SavedState(android.os.Parcel p0)
    {
      super(p0);
      this.a = p0.readString();
    }

    /* synthetic */ FragmentTabHost$SavedState(android.os.Parcel p0, int p1)
    {
      this(p0);
    }

    FragmentTabHost$SavedState(android.os.Parcelable p0)
    {
      super(p0);
    }

    public String toString()
    {
      return "FragmentTabHost$SavedState{" + Integer.toHexString(System.identityHashCode(this)) + " curTab=" + this.a + "}";
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      super.writeToParcel(p0, p1);
      p0.writeString(this.a);
    }

}
