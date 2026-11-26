package com.gameloft.android.GAND.GloftGGSS;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Build;
import android.os.Handler;
import java.lang.reflect.Method;

public final class CompatUtil {
    private static final int RECEIVER_EXPORTED_FLAG = 2;

    private CompatUtil() {}

    public static Intent registerReceiverCompat(Context ctx, BroadcastReceiver receiver, IntentFilter filter) {
        if (ctx == null) {
            return null;
        }
        if (Build.VERSION.SDK_INT >= 33) {
            try {
                Method m = Context.class.getMethod(
                    "registerReceiver",
                    BroadcastReceiver.class,
                    IntentFilter.class,
                    int.class
                );
                return (Intent) m.invoke(ctx, receiver, filter, Integer.valueOf(RECEIVER_EXPORTED_FLAG));
            } catch (Throwable ignored) {
            }
        }
        return ctx.registerReceiver(receiver, filter);
    }

    public static Intent registerReceiverCompat(
        Context ctx,
        BroadcastReceiver receiver,
        IntentFilter filter,
        String broadcastPermission,
        Handler scheduler
    ) {
        if (ctx == null) {
            return null;
        }
        if (Build.VERSION.SDK_INT >= 33) {
            try {
                Method m = Context.class.getMethod(
                    "registerReceiver",
                    BroadcastReceiver.class,
                    IntentFilter.class,
                    String.class,
                    Handler.class,
                    int.class
                );
                return (Intent) m.invoke(
                    ctx,
                    receiver,
                    filter,
                    broadcastPermission,
                    scheduler,
                    Integer.valueOf(RECEIVER_EXPORTED_FLAG)
                );
            } catch (Throwable ignored) {
            }
        }
        return ctx.registerReceiver(receiver, filter, broadcastPermission, scheduler);
    }
}
