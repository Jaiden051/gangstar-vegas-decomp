// Decompiled from classes.dex (SourceFile: ParcelableCompatCreatorHoneycombMR2Stub.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.os;

class ParcelableCompatCreatorHoneycombMR2Stub {
    // Methods
    ParcelableCompatCreatorHoneycombMR2Stub()
    {
      super();
    }

    static <T> android.os.Parcelable.Creator<T> instantiate(
            android.support.v4.os.ParcelableCompatCreatorCallbacks<T> p0)
    {
      return (android.os.Parcelable.Creator)new android.support.v4.os.ParcelableCompatCreatorHoneycombMR2(p0);
    }

}
