// Decompiled from classes.dex (SourceFile: FragmentManager.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

public abstract class FragmentManager {
    // Fields
    public static int a;

    // Methods
    public FragmentManager()
    {
      super();
    }

    public static void enableDebugLogging(boolean p0)
    {
      FragmentManagerImpl.b = p0;
    }

    private android.support.v4.app.ac g()
    {
      return this.a();
    }

    public abstract android.support.v4.app.Fragment$SavedState a(android.support.v4.app.Fragment p0);

    public abstract android.support.v4.app.Fragment a(int p0);

    public abstract android.support.v4.app.Fragment a(android.os.Bundle p0, java.lang.String p1);

    public abstract android.support.v4.app.Fragment a(java.lang.String p0);

    public abstract android.support.v4.app.ac a();

    public abstract void a(int p0, int p1);

    public abstract void a(android.os.Bundle p0, java.lang.String p1, android.support.v4.app.Fragment p2);

    public abstract void a(android.support.v4.app.t p0);

    public abstract void a(java.lang.String p0, int p1);

    public abstract void a(java.lang.String p0, java.io.FileDescriptor p1, java.io.PrintWriter p2, java.lang.String[] p3);

    public abstract android.support.v4.app.s b(int p0);

    public abstract void b(android.support.v4.app.t p0);

    public abstract boolean b();

    public abstract boolean b(int p0, int p1);

    public abstract boolean b(java.lang.String p0, int p1);

    public abstract void c();

    public abstract boolean d();

    public abstract int e();

    public abstract java.util.List f();

}
