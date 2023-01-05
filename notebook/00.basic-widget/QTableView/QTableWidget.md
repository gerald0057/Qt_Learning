- [Qt Widget-Basic-QTableWidget](#qt-widget-basic-qtablewidget)
  - [基础功能](#基础功能)

# Qt Widget-Basic-QTableWidget

## 基础功能

![](.assert/tablewidget.png)

```cpp
QWidget w;

QTableWidget table(4, 3, &w);

QVBoxLayout layout(&w);
layout.addWidget(&table);

w.show();
```

