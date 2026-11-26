package com.gameloft.android;

public final class DecompRT {
    private DecompRT() {}

    public static int u8(boolean v) { return v ? 1 : 0; }
    public static int u8(byte v) { return v & 0xFF; }
    public static int u8(short v) { return v & 0xFF; }
    public static int u8(char v) { return v & 0xFF; }
    public static int u8(int v) { return v & 0xFF; }
    public static int u8(long v) { return (int)(v & 0xFFL); }

    public static int hi32(long v) { return (int)(v >>> 32); }
    public static int hi32(int v) { return 0; }
    public static int __cmp_long(long a, long b) { return a < b ? -1 : (a > b ? 1 : 0); }

    public static void monitorEnter(Object obj) {}
    public static void monitorExit(Object obj) {}

    public static <T> T comma(Object ignored, T val) { return val; }

    public static int b2i(boolean v) { return v ? 1 : 0; }
    public static int b2i(int v) { return v; }

    public static void setLatestEventInfo(android.app.Notification n, android.content.Context ctx, CharSequence title, CharSequence text, android.app.PendingIntent pi) {
        try {
            android.app.Notification.class.getMethod("setLatestEventInfo", android.content.Context.class, CharSequence.class, CharSequence.class, android.app.PendingIntent.class).invoke(n, ctx, title, text, pi);
        } catch (Throwable ignored) {}
    }

    public static void discard(Object ignored) {}
    public static void discard(long ignored) {}
    public static void discard(double ignored) {}
    public static void discard(boolean ignored) {}

    @SuppressWarnings("unchecked")
    private static <T extends Throwable> RuntimeException _sneaky(Throwable t) throws T {
        throw (T) t;
    }

    public static RuntimeException sneakyThrow(Throwable t) {
        return DecompRT.<RuntimeException>_sneaky(t);
    }

    public static RuntimeException sneakyThrow(Object t) {
        if (t instanceof Throwable) return DecompRT.<RuntimeException>_sneaky((Throwable) t);
        return new RuntimeException(String.valueOf(t));
    }

    public static boolean always() { return true; }

    public static final class EnumSet<E> extends java.util.AbstractSet<E> implements Cloneable, java.io.Serializable {
        private final java.util.LinkedHashSet<E> _set = new java.util.LinkedHashSet<E>();

        private EnumSet() {}

        @Override
        public java.util.Iterator<E> iterator() { return _set.iterator(); }

        @Override
        public int size() { return _set.size(); }

        @Override
        public boolean add(E e) { return e != null && _set.add(e); }

        @Override
        @SuppressWarnings("unchecked")
        public EnumSet<E> clone() {
            EnumSet<E> copy = new EnumSet<E>();
            copy._set.addAll(this._set);
            return copy;
        }

        public static <E> EnumSet<E> noneOf(Class<E> elementType) {
            return new EnumSet<E>();
        }

        @SuppressWarnings("unchecked")
        public static <E> EnumSet<E> allOf(Class<E> elementType) {
            EnumSet<E> s = new EnumSet<E>();
            try {
                Object[] constants = elementType.getEnumConstants();
                if (constants != null) {
                    for (Object c : constants) s._set.add((E) c);
                } else {
                    java.lang.reflect.Method m = elementType.getMethod("values");
                    Object arr = m.invoke(null);
                    int len = java.lang.reflect.Array.getLength(arr);
                    for (int i = 0; i < len; i++) s._set.add((E) java.lang.reflect.Array.get(arr, i));
                }
            } catch (Throwable ignored) {}
            return s;
        }

        public static <E> EnumSet<E> of(E e) { EnumSet<E> s = new EnumSet<E>(); s.add(e); return s; }
        public static <E> EnumSet<E> of(E e1, E e2) { EnumSet<E> s = new EnumSet<E>(); s.add(e1); s.add(e2); return s; }
        public static <E> EnumSet<E> of(E e1, E e2, E e3) { EnumSet<E> s = new EnumSet<E>(); s.add(e1); s.add(e2); s.add(e3); return s; }
        public static <E> EnumSet<E> of(E e1, E e2, E e3, E e4) { EnumSet<E> s = new EnumSet<E>(); s.add(e1); s.add(e2); s.add(e3); s.add(e4); return s; }
        public static <E> EnumSet<E> of(E e1, E e2, E e3, E e4, E e5) { EnumSet<E> s = new EnumSet<E>(); s.add(e1); s.add(e2); s.add(e3); s.add(e4); s.add(e5); return s; }
        @SafeVarargs
        public static <E> EnumSet<E> of(E first, E... rest) {
            EnumSet<E> s = new EnumSet<E>();
            s.add(first);
            if (rest != null) for (E e : rest) s.add(e);
            return s;
        }
        public static <E> EnumSet<E> copyOf(EnumSet<E> s) { return s.clone(); }
        public static <E> EnumSet<E> copyOf(java.util.Collection<E> c) {
            EnumSet<E> s = new EnumSet<E>();
            if (c != null) s._set.addAll(c);
            return s;
        }
        public static <E> EnumSet<E> complementOf(EnumSet<E> s) {
            EnumSet<E> out = new EnumSet<E>();
            if (s != null && !s._set.isEmpty()) {
                @SuppressWarnings("unchecked")
                Class<E> cls = (Class<E>) s._set.iterator().next().getClass();
                out = allOf(cls);
                out._set.removeAll(s._set);
            }
            return out;
        }
        public static <E> EnumSet<E> range(E from, E to) {
            EnumSet<E> s = new EnumSet<E>();
            if (from != null && to != null) {
                @SuppressWarnings("unchecked")
                EnumSet<E> all = allOf((Class<E>) from.getClass());
                boolean in = false;
                for (E e : all) {
                    if (e.equals(from)) in = true;
                    if (in) s.add(e);
                    if (e.equals(to)) break;
                }
            }
            return s;
        }
    }

    public static abstract class EnumBase<E extends EnumBase<E>> implements Comparable<E>, java.io.Serializable {
        private final String _name;
        private final int _ordinal;

        protected EnumBase(String name, int ordinal) {
            this._name = name;
            this._ordinal = ordinal;
        }

        public final String name() { return _name; }
        public final int ordinal() { return _ordinal; }
        @Override
        public String toString() { return _name; }
        @Override
        public final boolean equals(Object other) { return this == other; }
        @Override
        public final int hashCode() { return super.hashCode(); }
        @Override
        public final int compareTo(E o) { return this._ordinal - ((EnumBase<?>) o)._ordinal; }

        public final Class<E> getDeclaringClass() {
            @SuppressWarnings("unchecked")
            Class<E> clazz = (Class<E>) getClass();
            Class<?> zuper = clazz.getSuperclass();
            @SuppressWarnings("unchecked")
            Class<E> res = (zuper == EnumBase.class) ? clazz : (Class<E>) zuper;
            return res;
        }

        @SuppressWarnings("unchecked")
        public static <T extends EnumBase<T>> T valueOf(Class<T> enumType, String name) {
            if (name == null) throw new NullPointerException("Name is null");
            try {
                java.lang.reflect.Method m = enumType.getMethod("values");
                Object arr = m.invoke(null);
                int len = java.lang.reflect.Array.getLength(arr);
                for (int i = 0; i < len; i++) {
                    T val = (T) java.lang.reflect.Array.get(arr, i);
                    if (name.equals(val.name())) return val;
                }
            } catch (Throwable ignored) {}
            throw new IllegalArgumentException("No enum constant " + enumType.getName() + "." + name);
        }
    }
}
