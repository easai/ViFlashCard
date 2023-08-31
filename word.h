#ifndef WORD_H
#define WORD_H

#include <QObject>
#include <QVariantMap>

using namespace std;

class Word : public QObject {
  Q_OBJECT
public:
  explicit Word(QObject *parent, const QVariantMap &map);
  QString getValue(const QString &key) const;
  operator QString() const;

private:
  QVariantMap m_dat;
};

#endif // WORD_H
