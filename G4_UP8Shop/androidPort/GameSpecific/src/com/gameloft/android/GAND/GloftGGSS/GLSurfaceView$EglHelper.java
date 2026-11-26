// Decompiled from classes.dex (SourceFile: GLSurfaceView$EglHelper.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.opengl.GLDebugHelper;
import javax.microedition.khronos.egl.EGL10;
import javax.microedition.khronos.egl.EGLContext;
final class GLSurfaceView$EglHelper {
    // Fields
    javax.microedition.khronos.egl.EGL10 a;
    javax.microedition.khronos.egl.EGLDisplay b;
    javax.microedition.khronos.egl.EGLSurface c;
    javax.microedition.khronos.egl.EGLConfig d;
    javax.microedition.khronos.egl.EGLContext e;
    final com.gameloft.android.GAND.GloftGGSS.GLSurfaceView f;

    // Methods
    public GLSurfaceView$EglHelper(com.gameloft.android.GAND.GloftGGSS.GLSurfaceView p0)
    {
      super();
      this.f = p0;
    
    }

    private void a(String p0)
    {
      throwEglException(p0, this.a.eglGetError());
    }

    private void e()
    {
      this.a.eglMakeCurrent(this.b, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_CONTEXT);
      this.a.eglMakeCurrent(this.b, this.c, this.c, this.e);
    }

    private static void throwEglException(String p0, int p1)
    {
      throw new RuntimeException(p0 + " failed: " + p1);
    }

    public final javax.microedition.khronos.opengles.GL a(android.view.SurfaceHolder p0)
    {
      java.io.Writer v2;
      int v3;
      int Error; // RETVAL
      javax.microedition.khronos.opengles.GL GL;
      v2 = null;
      v3 = 0;
      if ( this.a == null )
        throw new RuntimeException("egl not initialized");
      if ( this.b == null )
        throw new RuntimeException("eglDisplay not initialized");
      if ( this.d == null )
        throw new RuntimeException("mEglConfig not initialized");
      if ( this.c != null && this.c != EGL10.EGL_NO_SURFACE )
      {
        this.a.eglMakeCurrent(this.b, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_CONTEXT);
        GLSurfaceView.access$500(this.f).a(this.a, this.b, this.c);
      }
      try
      {
        this.c = GLSurfaceView.access$500(this.f).a(this.a, this.b, this.d, p0);
      }
      catch ( Exception e )
      {
        this.a("createWindowSurface");
      }
      if ( this.c == null || this.c == EGL10.EGL_NO_SURFACE )
      {
        Error = this.a.eglGetError();
        if ( Error == 12299 )
        {
          Log.e("EglHelper", "createWindowSurface returned EGL_BAD_NATIVE_WINDOW.", new Object[0]);
          return null;
        }
        throwEglException("createWindowSurface", Error);
      }
      if ( !this.a.eglMakeCurrent(this.b, this.c, this.c, this.e) )
        this.a("eglMakeCurrent");
      GL = this.e.getGL();
      if ( GLSurfaceView.access$600(this.f) != null )
        GL = GLSurfaceView.access$600(this.f).a();
      if ( (GLSurfaceView.access$700(this.f) & 3) != 0 )
      {
        if ( (GLSurfaceView.access$700(this.f) & 1) != 0 )
          v3 = 1;
        if ( (GLSurfaceView.access$700(this.f) & 2) != 0 )
          v2 = new com.gameloft.android.GAND.GloftGGSS.aa();
        return GLDebugHelper.wrap(GL, v3, (java.io.Writer)v2);
      }
      return GL;
    }

    public final void a()
    {
      this.a = (javax.microedition.khronos.egl.EGL10)EGLContext.getEGL();
      this.b = this.a.eglGetDisplay(EGL10.EGL_DEFAULT_DISPLAY);
      if ( this.b == EGL10.EGL_NO_DISPLAY )
        throw new RuntimeException("eglGetDisplay failed");
      if ( !this.a.eglInitialize(this.b, new int[2]) )
        throw new RuntimeException("eglInitialize failed");
      this.d = GLSurfaceView.access$300(this.f).a(this.a, this.b);
      this.e = GLSurfaceView.access$400(this.f).a(this.a, this.b, this.d);
      if ( this.e == null || this.e == EGL10.EGL_NO_CONTEXT )
      {
        this.e = null;
        this.a("createContext");
      }
      this.c = null;
    }

    public final boolean b()
    {
      boolean v1;
      int Error; // RETVAL
    
      v1 = false;
      try
      {
        if ( Game.az.aC || this.a.eglSwapBuffers(this.b, this.c) )
        {
          return true;
        }
        else
        {
          Error = this.a.eglGetError();
          switch ( Error )
          {
            case 12299:
              Log.e(
                "EglHelper",
                "eglSwapBuffers returned EGL_BAD_NATIVE_WINDOW. tid=" + Thread.currentThread().getId(),
                new Object[0]);
              return true;
            case 12302:
              return v1;
            default:
              throwEglException("eglSwapBuffers", Error);
              return true;
          }
        }
      }
      catch ( Exception e )
      {
      }
      return v1;
    }

    public final void c()
    {
      if ( this.c != null && this.c != EGL10.EGL_NO_SURFACE )
      {
        this.a.eglMakeCurrent(this.b, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_CONTEXT);
        GLSurfaceView.access$500(this.f).a(this.a, this.b, this.c);
        this.c = null;
      }
    }

    public final void d()
    {
      if ( this.e != null )
      {
        GLSurfaceView.access$400(this.f).a(this.a, this.b, this.e);
        this.e = null;
      }
      if ( this.b != null )
      {
        this.a.eglTerminate(this.b);
        this.b = null;
      }
    }

}
