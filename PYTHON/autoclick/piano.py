from pyautogui import *
import pyautogui
import time
import keyboard
import random
import win32api, win32con

def Click(x,y):
    win32api.SetCursorPos((x,y))
    win32api.mouse_event(win32con.MOUSEEVENTF_LEFTDOWN,0,0)
    time.sleep(0.01)
    win32api.mouse_event(win32con.MOUSEEVENTF_LEFTUP,0,0)
while keyboard.is_pressed('q')==False:
    if pyautogui.pixel(125,630)[0]<25:
        Click(125,630) 
    if pyautogui.pixel(230,630)[0]<25:
        Click(230,630)
    if pyautogui.pixel(335,630)[0]<25:
        Click(335,630)
    if pyautogui.pixel(440,630)[0]<25:
        Click(440,630)
